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
ATerm term_j_109;
ATerm term_g_109;
ATerm term_f_109;
ATerm term_a_109;
ATerm term_z_108;
ATerm term_p_108;
ATerm term_f_108;
ATerm term_c_108;
ATerm term_b_108;
ATerm term_a_108;
ATerm term_z_107;
ATerm term_y_107;
ATerm term_x_107;
ATerm term_w_107;
ATerm term_v_107;
ATerm term_u_107;
ATerm term_t_107;
ATerm term_s_107;
ATerm term_r_107;
ATerm term_q_107;
ATerm term_p_107;
ATerm term_o_107;
ATerm term_w_106;
ATerm term_f_106;
ATerm term_e_106;
ATerm term_z_105;
ATerm term_p_105;
ATerm term_o_105;
ATerm term_n_105;
ATerm term_m_105;
ATerm term_l_105;
ATerm term_a_105;
ATerm term_v_104;
ATerm term_s_104;
ATerm term_r_104;
ATerm term_q_104;
ATerm term_p_104;
ATerm term_o_104;
ATerm term_n_104;
ATerm term_m_104;
ATerm term_j_104;
ATerm term_i_104;
ATerm term_h_104;
ATerm term_g_104;
ATerm term_f_104;
ATerm term_e_104;
ATerm term_c_104;
ATerm term_b_104;
ATerm term_y_103;
ATerm term_x_103;
ATerm term_w_103;
ATerm term_v_103;
ATerm term_u_103;
ATerm term_f_102;
ATerm term_z_101;
ATerm term_y_101;
ATerm term_x_101;
ATerm term_w_101;
ATerm term_v_101;
ATerm term_u_101;
ATerm term_t_101;
ATerm term_s_101;
ATerm term_r_101;
ATerm term_q_101;
ATerm term_p_101;
ATerm term_o_101;
ATerm term_n_101;
ATerm term_m_101;
ATerm term_l_101;
ATerm term_k_101;
ATerm term_j_101;
ATerm term_i_101;
ATerm term_h_101;
ATerm term_g_101;
ATerm term_f_101;
ATerm term_e_101;
ATerm term_d_101;
ATerm term_c_101;
ATerm term_b_101;
ATerm term_a_101;
ATerm term_m_100;
ATerm term_k_100;
ATerm term_a_100;
ATerm term_z_99;
ATerm term_r_99;
ATerm term_q_99;
ATerm term_n_99;
ATerm term_l_99;
ATerm term_k_99;
ATerm term_h_99;
ATerm term_c_99;
ATerm term_s_98;
ATerm term_r_98;
ATerm term_p_98;
ATerm term_o_98;
ATerm term_n_98;
ATerm term_m_98;
ATerm term_l_98;
ATerm term_k_98;
ATerm term_g_98;
ATerm term_d_98;
ATerm term_c_98;
ATerm term_p_96;
ATerm term_o_96;
ATerm term_n_96;
ATerm term_m_96;
ATerm term_l_96;
ATerm term_k_96;
ATerm term_j_96;
ATerm term_i_96;
ATerm term_f_96;
ATerm term_e_96;
ATerm term_d_96;
ATerm term_o_94;
ATerm term_d_94;
ATerm term_c_94;
ATerm term_b_94;
ATerm term_p_93;
ATerm term_b_93;
ATerm term_y_92;
ATerm term_r_92;
ATerm term_m_92;
ATerm term_l_92;
ATerm term_k_92;
ATerm term_t_91;
ATerm term_q_91;
ATerm term_n_91;
ATerm term_q_90;
ATerm term_n_90;
ATerm term_m_90;
ATerm term_l_90;
ATerm term_j_90;
ATerm term_i_90;
ATerm term_f_90;
ATerm term_c_90;
ATerm term_b_90;
ATerm term_x_89;
ATerm term_u_89;
ATerm term_t_89;
ATerm term_s_89;
ATerm term_n_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_e_89;
ATerm term_d_89;
ATerm term_y_88;
ATerm term_x_88;
ATerm term_s_88;
ATerm term_r_88;
ATerm term_i_88;
ATerm term_f_88;
ATerm term_c_88;
ATerm term_x_87;
ATerm term_w_87;
ATerm term_n_87;
ATerm term_m_87;
ATerm term_g_87;
ATerm term_v_86;
ATerm term_m_86;
ATerm term_j_86;
ATerm term_i_86;
ATerm term_h_86;
ATerm term_g_86;
ATerm term_f_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_c_86;
ATerm term_b_86;
ATerm term_a_86;
ATerm term_z_85;
ATerm term_y_85;
ATerm term_x_85;
ATerm term_w_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_q_85;
ATerm term_p_85;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_u_84;
ATerm term_t_84;
ATerm term_s_84;
ATerm term_r_84;
ATerm term_q_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_b_84;
ATerm term_a_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_m_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_h_83;
ATerm term_g_83;
ATerm term_f_83;
ATerm term_e_83;
ATerm term_d_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_x_82;
ATerm term_w_82;
ATerm term_v_82;
ATerm term_u_82;
ATerm term_t_82;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_o_82;
ATerm term_n_82;
ATerm term_m_82;
ATerm term_l_82;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_d_82;
ATerm term_c_82;
ATerm term_b_82;
ATerm term_a_82;
ATerm term_p_81;
ATerm term_o_81;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_h_81;
ATerm term_g_81;
ATerm term_b_81;
ATerm term_a_81;
ATerm term_z_80;
ATerm term_q_80;
ATerm term_l_80;
ATerm term_g_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_v_79;
ATerm term_q_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_c_78;
ATerm term_y_77;
ATerm term_x_77;
ATerm term_s_77;
ATerm term_o_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_b_77;
ATerm term_m_76;
ATerm term_j_76;
ATerm term_e_76;
ATerm term_b_76;
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_r_74;
ATerm term_k_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_a_74;
ATerm term_t_73;
ATerm term_n_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_y_72;
ATerm term_v_72;
ATerm term_s_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_x_33;
void init_constant_terms (void)
{
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_x_77));
  term_x_77 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8a", 0, ATtrue));
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8b", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize3", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_82, term_l_75, term_h_82);
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_82, term_q_72, term_k_82);
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_82));
  term_n_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_82, term_s_75, term_n_82);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_82, term_q_82, term_r_82);
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_82, term_u_82, term_v_82);
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_82, term_y_82, term_z_82);
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_83, term_c_83, term_d_83);
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_83, term_g_83, term_h_83);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_83, term_k_83, term_l_83);
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_83, term_o_83, term_p_83);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_83, term_s_83, term_t_83);
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_83, term_g_77, term_w_83);
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_83, term_z_83, term_a_84);
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_84, term_d_84, term_e_84);
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_84, term_h_84, term_i_84);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_84, term_l_84, term_m_84);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_84, term_p_84, term_q_84);
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_84, term_t_84, term_u_84);
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_84, term_x_84, term_y_84);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_85, term_b_85, term_c_85);
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_85, term_f_85, term_g_85);
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_85, term_j_85, term_m_85);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_85, term_p_85, term_q_85);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_85, term_t_85, term_u_85);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_85, term_b_77, term_x_85);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_85, term_a_86, term_b_86);
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_86, term_e_86, term_f_86);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_86, term_i_86, term_j_86);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_x_87));
  term_x_87 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_s_89));
  term_s_89 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_89));
  term_t_89 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_89));
  term_x_89 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_90));
  term_c_90 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_90));
  term_j_90 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_90));
  term_l_90 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_90));
  term_m_90 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_q_90));
  term_q_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_q_91));
  term_q_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_t_91));
  term_t_91 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_92));
  term_r_92 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_y_92));
  term_y_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_93));
  term_b_93 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_b_94));
  term_b_94 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_96));
  term_d_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_e_96));
  term_e_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_i_96));
  term_i_96 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_j_96));
  term_j_96 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_96));
  term_l_96 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_96));
  term_m_96 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_96));
  term_n_96 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_96));
  term_o_96 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_96));
  term_p_96 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_c_98));
  term_c_98 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_98));
  term_d_98 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_98));
  term_g_98 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_98));
  term_k_98 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_98));
  term_l_98 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_98));
  term_m_98 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_98));
  term_n_98 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_98));
  term_o_98 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_98));
  term_p_98 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_98));
  term_r_98 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_98));
  term_s_98 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_99));
  term_c_99 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_99));
  term_h_99 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_99));
  term_k_99 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_99));
  term_l_99 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_99));
  term_n_99 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_99));
  term_q_99 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_99));
  term_r_99 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_99));
  term_z_99 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_100));
  term_a_100 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_100));
  term_k_100 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_100));
  term_m_100 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_101));
  term_a_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_b_101));
  term_b_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_101));
  term_c_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_d_101));
  term_d_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_e_101));
  term_e_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_f_101));
  term_f_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_g_101));
  term_g_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_h_101));
  term_h_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_i_101));
  term_i_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_j_101));
  term_j_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_k_101));
  term_k_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_101));
  term_l_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_m_101));
  term_m_101 = (ATerm) ATmakeAppl(sym__2, term_c_78, term_s_89);
  ATprotect(&(term_n_101));
  term_n_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_o_101));
  term_o_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_p_101));
  term_p_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_q_101));
  term_q_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_101));
  term_r_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_s_101));
  term_s_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_101));
  term_t_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_101));
  term_u_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_101));
  term_v_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_w_101));
  term_w_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_x_101));
  term_x_101 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_y_101));
  term_y_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_101));
  term_z_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_f_102));
  term_f_102 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_u_103));
  term_u_103 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_v_103));
  term_v_103 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_w_103));
  term_w_103 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_103));
  term_x_103 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_103));
  term_y_103 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_b_104));
  term_b_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_c_104));
  term_c_104 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_e_104));
  term_e_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_f_104));
  term_f_104 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_g_104));
  term_g_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_h_104));
  term_h_104 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_i_104));
  term_i_104 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_j_104));
  term_j_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_m_104));
  term_m_104 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_n_104));
  term_n_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_o_104));
  term_o_104 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_p_104));
  term_p_104 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_q_104));
  term_q_104 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_r_104));
  term_r_104 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_s_104));
  term_s_104 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_104));
  term_v_104 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_105));
  term_a_105 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_105));
  term_l_105 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_105));
  term_m_105 = (ATerm) ATmakeAppl(sym__3, term_n_72, term_l_105, term_s_89);
  ATprotect(&(term_n_105));
  term_n_105 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_105));
  term_o_105 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_105));
  term_p_105 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_105));
  term_z_105 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_106));
  term_e_106 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_106));
  term_f_106 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_106));
  term_w_106 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_107));
  term_o_107 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_p_107));
  term_p_107 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_q_107));
  term_q_107 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_r_107));
  term_r_107 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_s_107));
  term_s_107 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_t_107));
  term_t_107 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_u_107));
  term_u_107 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_v_107));
  term_v_107 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_w_107));
  term_w_107 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_x_107));
  term_x_107 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_y_107));
  term_y_107 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_z_107));
  term_z_107 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_a_108));
  term_a_108 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_b_108));
  term_b_108 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_c_108));
  term_c_108 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_f_108));
  term_f_108 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_p_108));
  term_p_108 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_z_108));
  term_z_108 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_a_109));
  term_a_109 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_f_109));
  term_f_109 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_g_109));
  term_g_109 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_109));
  term_j_109 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm c_57 (ATerm);
ATerm d_57 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm e_57 (ATerm);
ATerm f_57 (ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm h_57 (ATerm);
ATerm j_57 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm l_57 (ATerm);
ATerm m_57 (ATerm);
ATerm n_57 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm o_57 (ATerm);
ATerm p_57 (ATerm);
ATerm q_57 (ATerm);
ATerm r_57 (ATerm);
ATerm s_57 (ATerm);
ATerm t_57 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm u_57 (ATerm);
ATerm v_57 (ATerm);
ATerm w_57 (ATerm);
ATerm x_57 (ATerm);
ATerm y_57 (ATerm);
ATerm z_57 (ATerm);
ATerm a_58 (ATerm);
ATerm b_58 (ATerm);
ATerm c_58 (ATerm);
ATerm d_58 (ATerm);
ATerm e_58 (ATerm);
ATerm f_58 (ATerm);
ATerm g_58 (ATerm);
ATerm h_58 (ATerm);
ATerm i_58 (ATerm);
ATerm j_58 (ATerm);
ATerm k_58 (ATerm);
ATerm l_58 (ATerm);
ATerm m_58 (ATerm);
ATerm n_58 (ATerm);
ATerm o_58 (ATerm);
ATerm p_58 (ATerm);
ATerm q_58 (ATerm);
ATerm r_58 (ATerm);
ATerm s_58 (ATerm);
ATerm t_58 (ATerm);
ATerm u_58 (ATerm);
ATerm v_58 (ATerm);
ATerm w_58 (ATerm);
ATerm x_58 (ATerm);
ATerm y_58 (ATerm);
ATerm z_58 (ATerm);
ATerm a_59 (ATerm);
ATerm b_59 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm);
ATerm c_59 (ATerm);
ATerm d_59 (ATerm);
ATerm e_59 (ATerm);
ATerm f_59 (ATerm);
ATerm g_59 (ATerm);
ATerm h_59 (ATerm);
ATerm i_59 (ATerm);
ATerm j_59 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm k_59 (ATerm);
ATerm l_59 (ATerm);
ATerm m_59 (ATerm);
ATerm n_59 (ATerm);
ATerm o_59 (ATerm);
ATerm p_59 (ATerm);
ATerm q_59 (ATerm);
ATerm r_59 (ATerm);
ATerm s_59 (ATerm);
ATerm t_59 (ATerm);
ATerm u_59 (ATerm);
ATerm v_59 (ATerm);
ATerm w_59 (ATerm);
ATerm x_59 (ATerm);
ATerm y_59 (ATerm);
ATerm z_59 (ATerm);
ATerm a_60 (ATerm);
ATerm b_60 (ATerm);
ATerm c_60 (ATerm);
ATerm d_60 (ATerm);
ATerm e_60 (ATerm);
ATerm f_60 (ATerm);
ATerm g_60 (ATerm);
ATerm h_60 (ATerm);
ATerm i_60 (ATerm);
ATerm j_60 (ATerm);
ATerm k_60 (ATerm);
ATerm l_60 (ATerm);
ATerm m_60 (ATerm);
ATerm n_60 (ATerm);
ATerm o_60 (ATerm);
ATerm p_60 (ATerm);
ATerm q_60 (ATerm);
ATerm r_60 (ATerm);
ATerm s_60 (ATerm);
ATerm t_60 (ATerm);
ATerm u_60 (ATerm);
ATerm v_60 (ATerm);
ATerm w_60 (ATerm);
ATerm x_60 (ATerm);
ATerm y_60 (ATerm);
ATerm z_60 (ATerm);
ATerm a_61 (ATerm);
ATerm b_61 (ATerm);
ATerm c_61 (ATerm);
ATerm d_61 (ATerm);
ATerm e_61 (ATerm);
ATerm f_61 (ATerm);
ATerm g_61 (ATerm);
ATerm h_61 (ATerm);
ATerm i_61 (ATerm);
ATerm j_61 (ATerm);
ATerm k_61 (ATerm);
ATerm l_61 (ATerm);
ATerm m_61 (ATerm);
ATerm n_61 (ATerm);
ATerm o_61 (ATerm);
ATerm p_61 (ATerm);
ATerm q_61 (ATerm);
ATerm r_61 (ATerm);
ATerm s_61 (ATerm);
ATerm t_61 (ATerm);
ATerm u_61 (ATerm);
ATerm v_61 (ATerm);
ATerm w_61 (ATerm);
ATerm x_61 (ATerm);
ATerm y_61 (ATerm);
ATerm z_61 (ATerm);
ATerm a_62 (ATerm);
ATerm b_62 (ATerm);
ATerm c_62 (ATerm);
ATerm d_62 (ATerm);
ATerm e_62 (ATerm);
ATerm f_62 (ATerm);
ATerm g_62 (ATerm);
ATerm h_62 (ATerm);
ATerm i_62 (ATerm);
ATerm j_62 (ATerm);
ATerm k_62 (ATerm);
ATerm l_62 (ATerm);
ATerm m_62 (ATerm);
ATerm n_62 (ATerm);
ATerm o_62 (ATerm);
ATerm p_62 (ATerm);
ATerm q_62 (ATerm);
ATerm r_62 (ATerm);
ATerm s_62 (ATerm);
ATerm t_62 (ATerm);
ATerm u_62 (ATerm);
ATerm v_62 (ATerm);
ATerm w_62 (ATerm);
ATerm x_62 (ATerm);
ATerm y_62 (ATerm);
ATerm z_62 (ATerm);
ATerm a_63 (ATerm);
ATerm b_63 (ATerm);
ATerm c_63 (ATerm);
ATerm d_63 (ATerm);
ATerm e_63 (ATerm);
ATerm f_63 (ATerm);
ATerm g_63 (ATerm);
ATerm h_63 (ATerm);
ATerm i_63 (ATerm);
ATerm j_63 (ATerm);
ATerm k_63 (ATerm);
ATerm l_63 (ATerm);
ATerm m_63 (ATerm);
ATerm n_63 (ATerm);
ATerm o_63 (ATerm);
ATerm p_63 (ATerm);
ATerm q_63 (ATerm);
ATerm r_63 (ATerm);
ATerm s_63 (ATerm);
ATerm t_63 (ATerm);
ATerm u_63 (ATerm);
ATerm v_63 (ATerm);
ATerm w_63 (ATerm);
ATerm x_63 (ATerm);
ATerm y_63 (ATerm);
ATerm z_63 (ATerm);
ATerm a_64 (ATerm);
ATerm b_64 (ATerm);
ATerm c_64 (ATerm);
ATerm d_64 (ATerm);
ATerm e_64 (ATerm);
ATerm f_64 (ATerm);
ATerm g_64 (ATerm);
ATerm h_64 (ATerm);
ATerm i_64 (ATerm);
ATerm j_64 (ATerm);
ATerm k_64 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm l_64 (ATerm);
ATerm m_64 (ATerm);
ATerm n_64 (ATerm);
ATerm o_64 (ATerm);
ATerm p_64 (ATerm);
ATerm q_64 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm);
ATerm r_64 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm t_108 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm y_64 (ATerm);
ATerm z_64 (ATerm);
ATerm a_65 (ATerm);
ATerm b_65 (ATerm);
ATerm c_65 (ATerm);
ATerm d_65 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm e_65 (ATerm);
ATerm f_65 (ATerm);
ATerm g_65 (ATerm);
ATerm h_65 (ATerm);
ATerm i_65 (ATerm);
ATerm j_65 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm k_65 (ATerm);
ATerm l_65 (ATerm);
ATerm m_65 (ATerm);
ATerm n_65 (ATerm);
ATerm o_65 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm p_65 (ATerm);
ATerm q_65 (ATerm);
ATerm r_65 (ATerm);
ATerm s_65 (ATerm);
ATerm t_65 (ATerm);
ATerm u_65 (ATerm);
ATerm frontend_0_0 (ATerm);
ATerm w_65 (ATerm);
ATerm x_65 (ATerm);
ATerm y_65 (ATerm);
ATerm z_65 (ATerm);
ATerm save_as_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm assert_1_0 (ATerm d_104 (ATerm), ATerm);
ATerm k_14 (ATerm y_13, ATerm);
ATerm l_14 (ATerm a_14, ATerm b_14, ATerm c_14, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm b_66 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm c_66 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm z_115 (ATerm), ATerm);
ATerm d_66 (ATerm);
ATerm g_66 (ATerm);
ATerm h_66 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm j_66 (ATerm);
ATerm k_66 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm l_66 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm m_66 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm n_66 (ATerm);
ATerm o_66 (ATerm);
ATerm basename_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm p_66 (ATerm);
ATerm q_66 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm r_66 (ATerm);
ATerm s_66 (ATerm);
ATerm t_66 (ATerm);
ATerm u_66 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm v_66 (ATerm);
ATerm w_66 (ATerm);
ATerm x_66 (ATerm);
ATerm y_66 (ATerm);
ATerm z_66 (ATerm);
ATerm a_67 (ATerm);
ATerm b_67 (ATerm);
ATerm c_67 (ATerm);
ATerm d_67 (ATerm);
ATerm e_67 (ATerm);
ATerm f_67 (ATerm);
ATerm i_67 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm j_67 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm l_67 (ATerm);
ATerm n_67 (ATerm);
ATerm o_67 (ATerm);
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
ATerm q_67 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm r_24 (ATerm k_24, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_67 (ATerm);
ATerm t_67 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_67 (ATerm);
ATerm v_67 (ATerm);
ATerm w_67 (ATerm);
ATerm x_67 (ATerm);
ATerm y_67 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm a_68 (ATerm);
ATerm b_68 (ATerm);
ATerm c_68 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm d_68 (ATerm);
ATerm f_68 (ATerm);
ATerm g_68 (ATerm);
ATerm h_68 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm k_68 (ATerm);
ATerm l_68 (ATerm);
ATerm m_68 (ATerm);
ATerm n_68 (ATerm);
ATerm o_68 (ATerm);
ATerm p_68 (ATerm);
ATerm q_68 (ATerm);
ATerm r_68 (ATerm);
ATerm s_68 (ATerm);
ATerm t_68 (ATerm);
ATerm u_68 (ATerm);
ATerm v_68 (ATerm);
ATerm w_68 (ATerm);
ATerm x_68 (ATerm);
ATerm y_68 (ATerm);
ATerm z_68 (ATerm);
ATerm a_69 (ATerm);
ATerm b_69 (ATerm);
ATerm c_69 (ATerm);
ATerm d_69 (ATerm);
ATerm e_69 (ATerm);
ATerm f_69 (ATerm);
ATerm g_69 (ATerm);
ATerm h_69 (ATerm);
ATerm i_69 (ATerm);
ATerm j_69 (ATerm);
ATerm k_69 (ATerm);
ATerm l_69 (ATerm);
ATerm m_69 (ATerm);
ATerm n_69 (ATerm);
ATerm o_69 (ATerm);
ATerm p_69 (ATerm);
ATerm q_69 (ATerm);
ATerm r_69 (ATerm);
ATerm s_69 (ATerm);
ATerm t_69 (ATerm);
ATerm u_69 (ATerm);
ATerm v_69 (ATerm);
ATerm w_69 (ATerm);
ATerm x_69 (ATerm);
ATerm y_69 (ATerm);
ATerm z_69 (ATerm);
ATerm a_70 (ATerm);
ATerm b_70 (ATerm);
ATerm c_70 (ATerm);
ATerm d_70 (ATerm);
ATerm e_70 (ATerm);
ATerm f_70 (ATerm);
ATerm g_70 (ATerm);
ATerm h_70 (ATerm);
ATerm i_70 (ATerm);
ATerm j_70 (ATerm);
ATerm k_70 (ATerm);
ATerm l_70 (ATerm);
ATerm m_70 (ATerm);
ATerm n_70 (ATerm);
ATerm o_70 (ATerm);
ATerm p_70 (ATerm);
ATerm q_70 (ATerm);
ATerm r_70 (ATerm);
ATerm s_70 (ATerm);
ATerm t_70 (ATerm);
ATerm u_70 (ATerm);
ATerm v_70 (ATerm);
ATerm w_70 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm b_71 (ATerm);
ATerm c_71 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_71 (ATerm);
ATerm f_71 (ATerm);
ATerm g_71 (ATerm);
ATerm h_71 (ATerm);
ATerm i_71 (ATerm);
ATerm j_71 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_71 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm);
ATerm n_71 (ATerm);
ATerm o_71 (ATerm);
ATerm p_71 (ATerm);
ATerm q_71 (ATerm);
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm _2_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm);
ATerm u_71 (ATerm);
ATerm x_71 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm);
ATerm z_71 (ATerm);
ATerm a_72 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm b_72 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm c_72 (ATerm);
ATerm d_72 (ATerm);
ATerm e_72 (ATerm);
ATerm f_72 (ATerm);
ATerm g_72 (ATerm);
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
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_99(t);
      ;
      LocalPopChoice(n_32);
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
ATerm c_57 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm d_57 (ATerm t)
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
    ATerm h_72 = t;
    int i_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_1, b_1);
        ;
        LocalPopChoice(i_72);
      }
    else
      {
        t = h_72;
        t = SSL_addr(a_1, b_1);
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
      ATerm j_72 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  t = foldr_2_0(c_57, d_57, t);
  c_1 = t;
  t = SSL_TicksToSeconds(c_1);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm k_72 = t;
  int l_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 = NULL,x_1 = NULL,o_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
      i_1 = t;
      t = term_m_72;
      u_0 = t;
      t = term_n_72;
      o_0 = t;
      t = u_0;
      v_0 = t;
      t = term_m_72;
      t_0 = t;
      t = SSL_table_get(o_0, t_0);
      {
        ATerm o_72 = t;
        int p_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,w_0 = NULL,y_0 = NULL,z_0 = NULL,d_1 = NULL;
            t = eval_config_0_0(t);
            j_1 = t;
            z_0 = t;
            t = term_n_72;
            w_0 = t;
            t = z_0;
            d_1 = t;
            t = term_m_72;
            y_0 = t;
            t = SSL_table_put(w_0, y_0, j_1);
            t = j_1;
            ;
            LocalPopChoice(p_72);
          }
        else
          {
            t = o_72;
          }
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, term_q_72);
        t = geq_0_0(t);
        t = i_1;
        t = h_107(t);
      }
      ;
      LocalPopChoice(l_72);
    }
  else
    {
      t = k_72;
    }
  return(t);
}
ATerm e_57 (ATerm t)
{
  ATerm v_2 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL;
  v_2 = t;
  g_1 = t;
  t = term_r_72;
  e_1 = t;
  t = g_1;
  h_1 = t;
  t = (ATerm) ATinsert(ATempty, term_s_72);
  f_1 = t;
  t = SSL_printnl(e_1, f_1);
  t = v_2;
  return(t);
}
ATerm f_57 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL;
  w_2 = t;
  g_3 = t;
  t = term_r_72;
  x_2 = t;
  t = g_3;
  i_3 = t;
  t = (ATerm) ATinsert(ATempty, w_2);
  f_3 = t;
  t = SSL_printnl(x_2, f_3);
  t = w_2;
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm g_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = if_verbose2_1_0(e_57, t);
  {
    ATerm t_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,o_1 = NULL;
        t = term_v_72;
        m_1 = t;
        t = term_n_72;
        k_1 = t;
        t = m_1;
        o_1 = t;
        t = term_v_72;
        l_1 = t;
        t = SSL_table_get(k_1, l_1);
        {
          ATerm w_72 = t;
          int x_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL;
              t = eval_config_0_0(t);
              n_1 = t;
              s_1 = t;
              t = term_n_72;
              p_1 = t;
              t = s_1;
              t_1 = t;
              t = term_v_72;
              q_1 = t;
              t = SSL_table_put(p_1, q_1, n_1);
              t = n_1;
              ;
              LocalPopChoice(x_72);
            }
          else
            {
              t = w_72;
            }
        }
        ;
        LocalPopChoice(u_72);
      }
    else
      {
        t = t_72;
        {
          ATerm r_1 = NULL,u_1 = NULL,v_1 = NULL,y_1 = NULL,z_1 = NULL;
          t = term_y_72;
          y_1 = t;
          t = term_n_72;
          u_1 = t;
          t = y_1;
          z_1 = t;
          t = term_y_72;
          v_1 = t;
          t = SSL_table_get(u_1, v_1);
          {
            ATerm z_72 = t;
            int a_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL;
                t = eval_config_0_0(t);
                w_1 = t;
                d_2 = t;
                t = term_n_72;
                a_2 = t;
                t = d_2;
                f_2 = t;
                t = term_y_72;
                c_2 = t;
                t = SSL_table_put(a_2, c_2, w_1);
                t = w_1;
                ;
                LocalPopChoice(a_73);
              }
            else
              {
                t = z_72;
              }
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_1, term_b_73);
            t = conc_strings_0_0(t);
          }
        }
      }
    r_2 = t;
    t = term_c_73;
    j_2 = t;
    t = term_n_72;
    h_2 = t;
    t = j_2;
    l_2 = t;
    t = term_c_73;
    i_2 = t;
    t = SSL_table_get(h_2, i_2);
    {
      ATerm d_73 = t;
      int e_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL;
          t = eval_config_0_0(t);
          b_2 = t;
          p_2 = t;
          t = term_n_72;
          m_2 = t;
          t = p_2;
          q_2 = t;
          t = term_c_73;
          n_2 = t;
          t = SSL_table_put(m_2, n_2, b_2);
          t = b_2;
          ;
          LocalPopChoice(e_73);
        }
      else
        {
          t = d_73;
        }
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_73, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_2), r_2), term_v_72), g_2));
      t = if_verbose3_1_0(f_57, t);
      if(match_cons(t, sym__2))
        {
          t_2 = ATgetArgument(t, 0);
          u_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_57 (ATerm t)
        {
          t = SSL_execvp(t_2, u_2);
          return(t);
        }
        t = fork_and_wait_1_0(g_57, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
      }
    }
  }
  return(t);
}
ATerm h_57 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,k_3 = NULL,n_3 = NULL,p_3 = NULL;
  h_3 = t;
  n_3 = t;
  t = term_r_72;
  j_3 = t;
  t = n_3;
  p_3 = t;
  t = (ATerm) ATinsert(ATempty, term_g_73);
  k_3 = t;
  t = SSL_printnl(j_3, k_3);
  t = h_3;
  return(t);
}
ATerm j_57 (ATerm t)
{
  ATerm l_3 = NULL,z_4 = NULL,b_5 = NULL,d_5 = NULL,f_5 = NULL;
  l_3 = t;
  d_5 = t;
  t = term_r_72;
  z_4 = t;
  t = d_5;
  f_5 = t;
  t = (ATerm) ATinsert(ATempty, l_3);
  b_5 = t;
  t = SSL_printnl(z_4, b_5);
  t = l_3;
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,e_2 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      y_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = if_verbose2_1_0(h_57, t);
  t = term_y_72;
  t_3 = t;
  t = term_n_72;
  r_3 = t;
  t = t_3;
  u_3 = t;
  t = term_y_72;
  s_3 = t;
  t = SSL_table_get(r_3, s_3);
  {
    ATerm h_73 = t;
    int i_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
        t = eval_config_0_0(t);
        k_2 = t;
        x_3 = t;
        t = term_n_72;
        v_3 = t;
        t = x_3;
        y_3 = t;
        t = term_y_72;
        w_3 = t;
        t = SSL_table_put(v_3, w_3, k_2);
        t = k_2;
        ;
        LocalPopChoice(i_73);
      }
    else
      {
        t = h_73;
      }
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_j_73);
    t = conc_strings_0_0(t);
    a_3 = t;
    t = term_k_73;
    c_4 = t;
    t = term_n_72;
    z_3 = t;
    t = c_4;
    e_4 = t;
    t = term_k_73;
    a_4 = t;
    t = SSL_table_get(z_3, a_4);
    {
      ATerm l_73 = t;
      int m_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
          t = eval_config_0_0(t);
          o_2 = t;
          h_4 = t;
          t = term_n_72;
          f_4 = t;
          t = h_4;
          i_4 = t;
          t = term_k_73;
          g_4 = t;
          t = SSL_table_put(f_4, g_4, o_2);
          t = o_2;
          ;
          LocalPopChoice(m_73);
        }
      else
        {
          t = l_73;
        }
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_v_72), y_2), term_n_73));
      {
        ATerm o_73 = t;
        int p_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm q_73 = ATgetArgument(t, 0);
                ATerm r_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_3;
            {
              ATerm i_57 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_v_72), y_2), term_n_73);
                return(t);
              }
              t = at_end_1_0(i_57, t);
            }
            ;
            LocalPopChoice(p_73);
          }
        else
          {
            t = o_73;
            {
              ATerm z_2 = NULL,m_4 = NULL,w_4 = NULL;
              w_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_v_72), y_2), term_n_73));
              m_4 = t;
              t = SSL_explode_term(m_4);
              if(match_cons(t, sym__2))
                {
                  ATerm s_73 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_73) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  z_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_2;
              t = concat_0_0(t);
            }
          }
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_73, c_3);
        t = if_verbose3_1_0(j_57, t);
        if(match_cons(t, sym__2))
          {
            d_3 = ATgetArgument(t, 0);
            e_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm k_57 (ATerm t)
          {
            t = SSL_execvp(d_3, e_3);
            return(t);
          }
          t = fork_and_wait_1_0(k_57, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
        }
      }
    }
  }
  return(t);
}
ATerm l_57 (ATerm t)
{
  t = if_verbose1_1_0(n_57, t);
  return(t);
}
ATerm m_57 (ATerm t)
{
  t = c_to_object_code_0_0(t);
  t = link_object_code_0_0(t);
  return(t);
}
ATerm n_57 (ATerm t)
{
  ATerm o_3 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,c_7 = NULL;
  o_3 = t;
  j_6 = t;
  t = term_r_72;
  h_6 = t;
  t = j_6;
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_t_73);
  i_6 = t;
  t = SSL_printnl(h_6, i_6);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(CheckATermList(o_3), term_t_73));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm u_73 = t;
  int v_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL,i_5 = NULL,q_5 = NULL,s_5 = NULL,u_5 = NULL;
      m_3 = t;
      t = term_n_73;
      s_5 = t;
      t = term_n_72;
      i_5 = t;
      t = s_5;
      u_5 = t;
      t = term_n_73;
      q_5 = t;
      t = SSL_table_get(i_5, q_5);
      {
        ATerm w_73 = t;
        int x_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL,x_5 = NULL,z_5 = NULL,c_6 = NULL,g_6 = NULL;
            t = eval_config_0_0(t);
            q_3 = t;
            c_6 = t;
            t = term_n_72;
            x_5 = t;
            t = c_6;
            g_6 = t;
            t = term_n_73;
            z_5 = t;
            t = SSL_table_put(x_5, z_5, q_3);
            t = q_3;
            ;
            LocalPopChoice(x_73);
          }
        else
          {
            t = w_73;
          }
        t = m_3;
      }
      ;
      LocalPopChoice(v_73);
    }
  else
    {
      t = u_73;
      t = profile_p__2_0(l_57, m_57, t);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL;
  b_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_73 = t;
    int z_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,g_7 = NULL;
        t = b_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        g_7 = t;
        t = term_a_74;
        e_7 = t;
        t = SSL_copy(d_4, e_7);
        t = SSL_remove(d_4);
        t = term_a_74;
        ;
        LocalPopChoice(z_73);
      }
    else
      {
        t = y_73;
        {
          ATerm b_74 = t;
          int c_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_5 = NULL;
              t = b_4;
              t = q_0(t);
              n_5 = t;
              {
                ATerm d_74 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_74 = t;
                    int f_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_74);
                      }
                    else
                      {
                        t = e_74;
                        {
                          ATerm o_5 = NULL;
                          o_5 = t;
                          if((d_4 != t))
                            {
                              _fail(t);
                            }
                          t = o_5;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_74;
                  }
                t = SSL_rename(d_4, n_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
              }
              ;
              LocalPopChoice(c_74);
            }
          else
            {
              t = b_74;
              t = b_4;
              t = q_0(t);
              if((d_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_4);
            }
        }
      }
  }
  return(t);
}
ATerm o_57 (ATerm t)
{
  t = term_g_74;
  return(t);
}
ATerm p_57 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,h_7 = NULL,k_7 = NULL,l_7 = NULL,u_7 = NULL;
  t = pass_verbose_0_0(t);
  j_4 = t;
  t = term_h_74;
  l_7 = t;
  t = term_n_72;
  h_7 = t;
  t = l_7;
  u_7 = t;
  t = term_h_74;
  k_7 = t;
  t = SSL_table_get(h_7, k_7);
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,w_7 = NULL,y_7 = NULL,a_8 = NULL,e_8 = NULL;
        t = eval_config_0_0(t);
        d_7 = t;
        a_8 = t;
        t = term_n_72;
        w_7 = t;
        t = a_8;
        e_8 = t;
        t = term_h_74;
        y_7 = t;
        t = SSL_table_put(w_7, y_7, d_7);
        t = d_7;
        ;
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
      }
    t = map_1_0(q_57, t);
    k_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_4), (ATerm) ATinsert(ATempty, term_k_74)), j_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm q_57 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_h_74);
  return(t);
}
ATerm r_57 (ATerm t)
{
  t = term_g_74;
  return(t);
}
ATerm s_57 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL,r_8 = NULL;
  t = pass_verbose_0_0(t);
  n_4 = t;
  t = term_h_74;
  l_8 = t;
  t = term_n_72;
  g_8 = t;
  t = l_8;
  r_8 = t;
  t = term_h_74;
  h_8 = t;
  t = SSL_table_get(g_8, h_8);
  {
    ATerm l_74 = t;
    int m_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL,s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL;
        t = eval_config_0_0(t);
        j_7 = t;
        v_8 = t;
        t = term_n_72;
        s_8 = t;
        t = v_8;
        w_8 = t;
        t = term_h_74;
        t_8 = t;
        t = SSL_table_put(s_8, t_8, j_7);
        t = j_7;
        ;
        LocalPopChoice(m_74);
      }
    else
      {
        t = l_74;
      }
    t = map_1_0(t_57, t);
    o_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_4), (ATerm) ATinsert(ATempty, term_k_74)), n_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm t_57 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_h_74);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm n_74 = t;
  int o_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_74 = t;
      int q_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(q_74);
        }
      else
        {
          t = p_74;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(o_74);
      t = xtc_transform_file_2_0(o_57, p_57, t);
    }
  else
    {
      t = n_74;
      t = xtc_transform_term_2_0(r_57, s_57, t);
    }
  return(t);
}
ATerm u_57 (ATerm t)
{
  ATerm q_4 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  q_4 = t;
  z_8 = t;
  t = term_r_72;
  x_8 = t;
  t = z_8;
  a_9 = t;
  t = (ATerm) ATinsert(ATempty, term_r_74);
  y_8 = t;
  t = SSL_printnl(x_8, y_8);
  t = q_4;
  return(t);
}
ATerm v_57 (ATerm t)
{
  t = if_verbose1_1_0(x_57, t);
  return(t);
}
ATerm w_57 (ATerm t)
{
  ATerm s_74 = t;
  int t_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_74 = t;
      int v_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_74);
        }
      else
        {
          t = u_74;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(t_74);
      t = xtc_transform_file_2_0(y_57, z_57, t);
    }
  else
    {
      t = s_74;
      t = xtc_transform_term_2_0(a_58, b_58, t);
    }
  t = if_keep1_1_0(c_58, t);
  t = olevel_2_0(e_58, f_58, t);
  t = if_keep1_1_0(k_58, t);
  t = olevel_2_0(m_58, bound_unbound_vars_0_0, t);
  t = if_keep1_1_0(n_58, t);
  {
    ATerm w_74 = t;
    int x_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_74 = t;
        int z_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(z_74);
          }
        else
          {
            t = y_74;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(x_74);
        t = xtc_transform_file_2_0(p_58, q_58, t);
      }
    else
      {
        t = w_74;
        t = xtc_transform_term_2_0(r_58, s_58, t);
      }
    t = s2c_0_0(t);
    {
      ATerm a_75 = t;
      int b_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_75 = t;
          int d_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(d_75);
            }
          else
            {
              t = c_75;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(b_75);
          t = xtc_transform_file_2_0(t_58, u_58, t);
        }
      else
        {
          t = a_75;
          t = xtc_transform_term_2_0(v_58, w_58, t);
        }
      {
        ATerm e_75 = t;
        int f_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_75 = t;
            int h_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(h_75);
              }
            else
              {
                t = g_75;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(f_75);
            t = xtc_transform_file_2_0(x_58, y_58, t);
          }
        else
          {
            t = e_75;
            t = xtc_transform_term_2_0(z_58, a_59, t);
          }
        t = rename_to_1_0(b_59, t);
      }
    }
  }
  return(t);
}
ATerm x_57 (ATerm t)
{
  ATerm r_4 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  r_4 = t;
  d_9 = t;
  t = term_r_72;
  b_9 = t;
  t = d_9;
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(r_4), term_i_75);
  c_9 = t;
  t = SSL_printnl(b_9, c_9);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(CheckATermList(r_4), term_i_75));
  return(t);
}
ATerm y_57 (ATerm t)
{
  t = term_j_75;
  return(t);
}
ATerm z_57 (ATerm t)
{
  ATerm s_4 = NULL;
  t = pass_verbose_0_0(t);
  s_4 = t;
  t = (ATerm) ATinsert(CheckATermList(s_4), term_k_74);
  return(t);
}
ATerm a_58 (ATerm t)
{
  t = term_j_75;
  return(t);
}
ATerm b_58 (ATerm t)
{
  ATerm t_4 = NULL;
  t = pass_verbose_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(CheckATermList(t_4), term_k_74);
  return(t);
}
ATerm c_58 (ATerm t)
{
  t = save_as_1_0(d_58, t);
  return(t);
}
ATerm d_58 (ATerm t)
{
  t = term_k_75;
  return(t);
}
ATerm e_58 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm f_58 (ATerm t)
{
  ATerm m_75 = t;
  int n_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_75 = t;
      int p_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_75);
        }
      else
        {
          t = o_75;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_75);
      t = xtc_transform_file_2_0(g_58, h_58, t);
    }
  else
    {
      t = m_75;
      t = xtc_transform_term_2_0(i_58, j_58, t);
    }
  return(t);
}
ATerm g_58 (ATerm t)
{
  t = term_q_75;
  return(t);
}
ATerm h_58 (ATerm t)
{
  ATerm u_4 = NULL;
  t = pass_verbose_0_0(t);
  u_4 = t;
  t = (ATerm) ATinsert(CheckATermList(u_4), term_k_74);
  return(t);
}
ATerm i_58 (ATerm t)
{
  t = term_q_75;
  return(t);
}
ATerm j_58 (ATerm t)
{
  ATerm v_4 = NULL;
  t = pass_verbose_0_0(t);
  v_4 = t;
  t = (ATerm) ATinsert(CheckATermList(v_4), term_k_74);
  return(t);
}
ATerm k_58 (ATerm t)
{
  t = save_as_1_0(l_58, t);
  return(t);
}
ATerm l_58 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm m_58 (ATerm t)
{
  t = term_s_75;
  return(t);
}
ATerm n_58 (ATerm t)
{
  t = save_as_1_0(o_58, t);
  return(t);
}
ATerm o_58 (ATerm t)
{
  t = term_t_75;
  return(t);
}
ATerm p_58 (ATerm t)
{
  t = term_u_75;
  return(t);
}
ATerm q_58 (ATerm t)
{
  ATerm x_4 = NULL;
  t = pass_verbose_0_0(t);
  x_4 = t;
  t = (ATerm) ATinsert(CheckATermList(x_4), term_k_74);
  return(t);
}
ATerm r_58 (ATerm t)
{
  t = term_u_75;
  return(t);
}
ATerm s_58 (ATerm t)
{
  ATerm y_4 = NULL;
  t = pass_verbose_0_0(t);
  y_4 = t;
  t = (ATerm) ATinsert(CheckATermList(y_4), term_k_74);
  return(t);
}
ATerm t_58 (ATerm t)
{
  t = term_v_75;
  return(t);
}
ATerm u_58 (ATerm t)
{
  ATerm a_5 = NULL;
  t = term_w_75;
  t = xtc_find_0_0(t);
  a_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_x_75);
  return(t);
}
ATerm v_58 (ATerm t)
{
  t = term_v_75;
  return(t);
}
ATerm w_58 (ATerm t)
{
  ATerm c_5 = NULL;
  t = term_w_75;
  t = xtc_find_0_0(t);
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_x_75);
  return(t);
}
ATerm x_58 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm y_58 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_58 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm a_59 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_59 (ATerm t)
{
  ATerm m_7 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  t = term_y_72;
  h_9 = t;
  t = term_n_72;
  f_9 = t;
  t = h_9;
  i_9 = t;
  t = term_y_72;
  g_9 = t;
  t = SSL_table_get(f_9, g_9);
  {
    ATerm z_75 = t;
    int a_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,j_9 = NULL,p_9 = NULL,q_9 = NULL,t_9 = NULL;
        t = eval_config_0_0(t);
        c_8 = t;
        q_9 = t;
        t = term_n_72;
        j_9 = t;
        t = q_9;
        t_9 = t;
        t = term_y_72;
        p_9 = t;
        t = SSL_table_put(j_9, p_9, c_8);
        t = c_8;
        ;
        LocalPopChoice(a_76);
      }
    else
      {
        t = z_75;
      }
    m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_7, term_b_76);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_57, t);
  t = profile_p__2_0(v_57, w_57, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm c_76 = t;
  int d_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,g_5 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL,z_9 = NULL;
      e_5 = t;
      t = term_e_76;
      y_9 = t;
      t = term_n_72;
      u_9 = t;
      t = y_9;
      z_9 = t;
      t = term_e_76;
      v_9 = t;
      t = SSL_table_get(u_9, v_9);
      {
        ATerm f_76 = t;
        int g_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
            t = eval_config_0_0(t);
            n_8 = t;
            c_10 = t;
            t = term_n_72;
            a_10 = t;
            t = c_10;
            d_10 = t;
            t = term_e_76;
            b_10 = t;
            t = SSL_table_put(a_10, b_10, n_8);
            t = n_8;
            ;
            LocalPopChoice(g_76);
          }
        else
          {
            t = f_76;
          }
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_l_75);
        t = geq_0_0(t);
        t = e_5;
        t = i_108(t);
      }
      ;
      LocalPopChoice(d_76);
    }
  else
    {
      t = c_76;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  ATerm h_76 = t;
  int i_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
      h_5 = t;
      t = e_116(t);
      j_5 = t;
      t = term_j_76;
      h_10 = t;
      t = term_n_72;
      e_10 = t;
      t = h_10;
      i_10 = t;
      t = term_j_76;
      g_10 = t;
      t = SSL_table_get(e_10, g_10);
      {
        ATerm k_76 = t;
        int l_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,q_10 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            o_10 = t;
            t = term_n_72;
            m_10 = t;
            t = o_10;
            q_10 = t;
            t = term_j_76;
            n_10 = t;
            t = SSL_table_put(m_10, n_10, u_8);
            t = u_8;
            ;
            LocalPopChoice(l_76);
          }
        else
          {
            t = k_76;
          }
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_5, j_5);
        t = geq_0_0(t);
        t = h_5;
        t = f_116(t);
      }
      ;
      LocalPopChoice(i_76);
    }
  else
    {
      t = h_76;
    }
  return(t);
}
ATerm c_59 (ATerm t)
{
  t = term_m_76;
  return(t);
}
ATerm d_59 (ATerm t)
{
  ATerm l_5 = NULL;
  t = pass_verbose_0_0(t);
  l_5 = t;
  t = (ATerm) ATinsert(CheckATermList(l_5), term_k_74);
  return(t);
}
ATerm e_59 (ATerm t)
{
  t = term_m_76;
  return(t);
}
ATerm f_59 (ATerm t)
{
  ATerm m_5 = NULL;
  t = pass_verbose_0_0(t);
  m_5 = t;
  t = (ATerm) ATinsert(CheckATermList(m_5), term_k_74);
  return(t);
}
ATerm g_59 (ATerm t)
{
  t = term_m_76;
  return(t);
}
ATerm h_59 (ATerm t)
{
  ATerm p_5 = NULL;
  t = pass_verbose_0_0(t);
  p_5 = t;
  t = (ATerm) ATinsert(CheckATermList(p_5), term_k_74);
  return(t);
}
ATerm i_59 (ATerm t)
{
  t = term_m_76;
  return(t);
}
ATerm j_59 (ATerm t)
{
  ATerm r_5 = NULL;
  t = pass_verbose_0_0(t);
  r_5 = t;
  t = (ATerm) ATinsert(CheckATermList(r_5), term_k_74);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm n_76 = t;
  int o_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_76 = t;
      int q_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_76 = t;
          int s_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(s_76);
            }
          else
            {
              t = r_76;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(q_76);
          t = xtc_transform_file_2_0(c_59, d_59, t);
        }
      else
        {
          t = p_76;
          t = xtc_transform_term_2_0(e_59, f_59, t);
        }
      ;
      LocalPopChoice(o_76);
    }
  else
    {
      t = n_76;
      {
        ATerm t_76 = t;
        int u_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_76 = t;
            int w_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(w_76);
              }
            else
              {
                t = v_76;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(u_76);
            t = xtc_transform_file_2_0(g_59, h_59, t);
          }
        else
          {
            t = t_76;
            t = xtc_transform_term_2_0(i_59, j_59, t);
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm x_76 = t;
  int y_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,v_5 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
      t_5 = t;
      t = term_e_76;
      t_10 = t;
      t = term_n_72;
      r_10 = t;
      t = t_10;
      u_10 = t;
      t = term_e_76;
      s_10 = t;
      t = SSL_table_get(r_10, s_10);
      {
        ATerm z_76 = t;
        int a_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
            t = eval_config_0_0(t);
            l_9 = t;
            x_10 = t;
            t = term_n_72;
            v_10 = t;
            t = x_10;
            y_10 = t;
            t = term_e_76;
            w_10 = t;
            t = SSL_table_put(v_10, w_10, l_9);
            t = l_9;
            ;
            LocalPopChoice(a_77);
          }
        else
          {
            t = z_76;
          }
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_5, term_b_77);
        t = geq_0_0(t);
        t = t_5;
        t = m_108(t);
      }
      ;
      LocalPopChoice(y_76);
    }
  else
    {
      t = x_76;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm c_77 = t;
  int d_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,y_5 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
      w_5 = t;
      t = term_e_76;
      b_11 = t;
      t = term_n_72;
      z_10 = t;
      t = b_11;
      c_11 = t;
      t = term_e_76;
      a_11 = t;
      t = SSL_table_get(z_10, a_11);
      {
        ATerm e_77 = t;
        int f_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = NULL,d_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL;
            t = eval_config_0_0(t);
            w_9 = t;
            h_11 = t;
            t = term_n_72;
            d_11 = t;
            t = h_11;
            i_11 = t;
            t = term_e_76;
            f_11 = t;
            t = SSL_table_put(d_11, f_11, w_9);
            t = w_9;
            ;
            LocalPopChoice(f_77);
          }
        else
          {
            t = e_77;
          }
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_5, term_g_77);
        t = geq_0_0(t);
        t = w_5;
        t = l_108(t);
      }
      ;
      LocalPopChoice(d_77);
    }
  else
    {
      t = c_77;
    }
  return(t);
}
ATerm k_59 (ATerm t)
{
  ATerm a_6 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  a_6 = t;
  l_11 = t;
  t = term_r_72;
  j_11 = t;
  t = l_11;
  m_11 = t;
  t = (ATerm) ATinsert(ATempty, term_h_77);
  k_11 = t;
  t = SSL_printnl(j_11, k_11);
  t = a_6;
  return(t);
}
ATerm l_59 (ATerm t)
{
  t = if_verbose1_1_0(n_59, t);
  return(t);
}
ATerm m_59 (ATerm t)
{
  t = if_verbose3_1_0(o_59, t);
  t = olevel_2_0(p_59, q_59, t);
  t = if_keep1_1_0(v_59, t);
  t = olevel_2_0(x_59, y_59, t);
  t = if_keep2_1_0(d_60, t);
  t = olevel_2_0(f_60, g_60, t);
  t = if_keep4_1_0(p_60, t);
  t = olevel_2_0(r_60, s_60, t);
  {
    ATerm i_77 = t;
    int j_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_77 = t;
        int n_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(n_77);
          }
        else
          {
            t = k_77;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(j_77);
        t = xtc_transform_file_2_0(x_60, y_60, t);
      }
    else
      {
        t = i_77;
        t = xtc_transform_term_2_0(z_60, a_61, t);
      }
    t = olevel_2_0(b_61, c_61, t);
    t = olevel_2_0(l_61, m_61, t);
    t = if_keep4_1_0(r_61, t);
    t = olevel_2_0(t_61, u_61, t);
    t = olevel_2_0(z_61, a_62, t);
    t = if_keep2_1_0(f_62, t);
    t = olevel_2_0(h_62, i_62, t);
    t = if_keep5_1_0(n_62, t);
    t = olevel_2_0(p_62, q_62, t);
    t = if_keep5_1_0(v_62, t);
    t = olevel_2_0(x_62, y_62, t);
    t = if_keep3_1_0(d_63, t);
    t = olevel_2_0(f_63, g_63, t);
    t = if_keep3_1_0(t_63, t);
    t = olevel_2_0(v_63, w_63, t);
    t = if_keep1_1_0(b_64, t);
    t = olevel_2_0(d_64, e_64, t);
    t = if_keep1_1_0(j_64, t);
  }
  return(t);
}
ATerm n_59 (ATerm t)
{
  ATerm b_6 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  b_6 = t;
  p_11 = t;
  t = term_r_72;
  n_11 = t;
  t = p_11;
  q_11 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_o_77);
  o_11 = t;
  t = SSL_printnl(n_11, o_11);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(CheckATermList(b_6), term_o_77));
  return(t);
}
ATerm o_59 (ATerm t)
{
  ATerm d_6 = NULL,p_10 = NULL,t_11 = NULL,u_11 = NULL,z_11 = NULL,a_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  d_6 = t;
  t = term_j_76;
  z_11 = t;
  t = term_n_72;
  t_11 = t;
  t = z_11;
  a_12 = t;
  t = term_j_76;
  u_11 = t;
  t = SSL_table_get(t_11, u_11);
  {
    ATerm q_77 = t;
    int r_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL,n_12 = NULL;
        t = eval_config_0_0(t);
        j_10 = t;
        g_12 = t;
        t = term_n_72;
        b_12 = t;
        t = g_12;
        n_12 = t;
        t = term_j_76;
        c_12 = t;
        t = SSL_table_put(b_12, c_12, j_10);
        t = j_10;
        ;
        LocalPopChoice(r_77);
      }
    else
      {
        t = q_77;
      }
    p_10 = t;
    t = term_s_77;
    q_12 = t;
    t = term_r_72;
    o_12 = t;
    t = q_12;
    r_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_10), term_s_77);
    p_12 = t;
    t = SSL_printnl(o_12, p_12);
    t = d_6;
  }
  return(t);
}
ATerm p_59 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm q_59 (ATerm t)
{
  ATerm t_77 = t;
  int u_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_77 = t;
      int w_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(w_77);
        }
      else
        {
          t = v_77;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(u_77);
      t = xtc_transform_file_2_0(r_59, s_59, t);
    }
  else
    {
      t = t_77;
      t = xtc_transform_term_2_0(t_59, u_59, t);
    }
  return(t);
}
ATerm r_59 (ATerm t)
{
  t = term_x_77;
  return(t);
}
ATerm s_59 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_k_74);
  return(t);
}
ATerm t_59 (ATerm t)
{
  t = term_x_77;
  return(t);
}
ATerm u_59 (ATerm t)
{
  ATerm f_6 = NULL;
  t = pass_verbose_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_6), term_k_74);
  return(t);
}
ATerm v_59 (ATerm t)
{
  t = save_as_1_0(w_59, t);
  return(t);
}
ATerm w_59 (ATerm t)
{
  t = term_y_77;
  return(t);
}
ATerm x_59 (ATerm t)
{
  t = term_q_72;
  return(t);
}
ATerm y_59 (ATerm t)
{
  ATerm z_77 = t;
  int a_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL;
      k_6 = t;
      {
        ATerm b_78 = t;
        if((PushChoice() == 0))
          {
            ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL;
            t = term_c_78;
            u_12 = t;
            t = term_n_72;
            s_12 = t;
            t = u_12;
            w_12 = t;
            t = term_c_78;
            t_12 = t;
            t = SSL_table_get(s_12, t_12);
            {
              ATerm d_78 = t;
              int e_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,y_12 = NULL,i_13 = NULL,v_13 = NULL,w_13 = NULL;
                  t = eval_config_0_0(t);
                  m_12 = t;
                  v_13 = t;
                  t = term_n_72;
                  y_12 = t;
                  t = v_13;
                  w_13 = t;
                  t = term_c_78;
                  i_13 = t;
                  t = SSL_table_put(y_12, i_13, m_12);
                  t = m_12;
                  ;
                  LocalPopChoice(e_78);
                }
              else
                {
                  t = d_78;
                }
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_78;
          }
        t = k_6;
        {
          ATerm f_78 = t;
          int g_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_78 = t;
              int i_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(i_78);
                }
              else
                {
                  t = h_78;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(g_78);
              t = xtc_transform_file_2_0(z_59, a_60, t);
            }
          else
            {
              t = f_78;
              t = xtc_transform_term_2_0(b_60, c_60, t);
            }
        }
      }
      ;
      LocalPopChoice(a_78);
    }
  else
    {
      t = z_77;
    }
  return(t);
}
ATerm z_59 (ATerm t)
{
  t = term_j_78;
  return(t);
}
ATerm a_60 (ATerm t)
{
  ATerm e_11 = NULL;
  t = pass_verbose_0_0(t);
  e_11 = t;
  t = (ATerm) ATinsert(CheckATermList(e_11), term_k_74);
  return(t);
}
ATerm b_60 (ATerm t)
{
  t = term_j_78;
  return(t);
}
ATerm c_60 (ATerm t)
{
  ATerm g_11 = NULL;
  t = pass_verbose_0_0(t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(g_11), term_k_74);
  return(t);
}
ATerm d_60 (ATerm t)
{
  t = save_as_1_0(e_60, t);
  return(t);
}
ATerm e_60 (ATerm t)
{
  t = term_k_78;
  return(t);
}
ATerm f_60 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm g_60 (ATerm t)
{
  ATerm l_78 = t;
  int m_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_78 = t;
      int o_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(o_78);
        }
      else
        {
          t = n_78;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_78);
      t = xtc_transform_file_2_0(h_60, i_60, t);
    }
  else
    {
      t = l_78;
      t = xtc_transform_term_2_0(j_60, k_60, t);
    }
  {
    ATerm p_78 = t;
    int q_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_78 = t;
        int s_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(s_78);
          }
        else
          {
            t = r_78;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(q_78);
        t = xtc_transform_file_2_0(l_60, m_60, t);
      }
    else
      {
        t = p_78;
        t = xtc_transform_term_2_0(n_60, o_60, t);
      }
  }
  return(t);
}
ATerm h_60 (ATerm t)
{
  t = term_t_78;
  return(t);
}
ATerm i_60 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_k_74);
  return(t);
}
ATerm j_60 (ATerm t)
{
  t = term_t_78;
  return(t);
}
ATerm k_60 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_k_74);
  return(t);
}
ATerm l_60 (ATerm t)
{
  t = term_u_78;
  return(t);
}
ATerm m_60 (ATerm t)
{
  ATerm n_6 = NULL;
  t = pass_verbose_0_0(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_6), term_k_74);
  return(t);
}
ATerm n_60 (ATerm t)
{
  t = term_u_78;
  return(t);
}
ATerm o_60 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_k_74);
  return(t);
}
ATerm p_60 (ATerm t)
{
  t = save_as_1_0(q_60, t);
  return(t);
}
ATerm q_60 (ATerm t)
{
  t = term_v_78;
  return(t);
}
ATerm r_60 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm s_60 (ATerm t)
{
  ATerm w_78 = t;
  int x_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_78 = t;
      int z_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(z_78);
        }
      else
        {
          t = y_78;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_78);
      t = xtc_transform_file_2_0(t_60, u_60, t);
    }
  else
    {
      t = w_78;
      t = xtc_transform_term_2_0(v_60, w_60, t);
    }
  return(t);
}
ATerm t_60 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm u_60 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_k_74);
  return(t);
}
ATerm v_60 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm w_60 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_k_74);
  return(t);
}
ATerm x_60 (ATerm t)
{
  t = term_b_79;
  return(t);
}
ATerm y_60 (ATerm t)
{
  ATerm r_6 = NULL;
  t = pass_verbose_0_0(t);
  r_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), term_k_74);
  return(t);
}
ATerm z_60 (ATerm t)
{
  t = term_b_79;
  return(t);
}
ATerm a_61 (ATerm t)
{
  ATerm s_6 = NULL;
  t = pass_verbose_0_0(t);
  s_6 = t;
  t = (ATerm) ATinsert(CheckATermList(s_6), term_k_74);
  return(t);
}
ATerm b_61 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm c_61 (ATerm t)
{
  ATerm c_79 = t;
  int d_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_79 = t;
      int f_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_79);
        }
      else
        {
          t = e_79;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_79);
      t = xtc_transform_file_2_0(d_61, e_61, t);
    }
  else
    {
      t = c_79;
      t = xtc_transform_term_2_0(f_61, g_61, t);
    }
  t = bound_unbound_vars_0_0(t);
  {
    ATerm g_79 = t;
    int h_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_79 = t;
        int j_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(j_79);
          }
        else
          {
            t = i_79;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(h_79);
        t = xtc_transform_file_2_0(h_61, i_61, t);
      }
    else
      {
        t = g_79;
        t = xtc_transform_term_2_0(j_61, k_61, t);
      }
  }
  return(t);
}
ATerm d_61 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm e_61 (ATerm t)
{
  ATerm t_6 = NULL;
  t = pass_verbose_0_0(t);
  t_6 = t;
  t = (ATerm) ATinsert(CheckATermList(t_6), term_k_74);
  return(t);
}
ATerm f_61 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm g_61 (ATerm t)
{
  ATerm u_6 = NULL;
  t = pass_verbose_0_0(t);
  u_6 = t;
  t = (ATerm) ATinsert(CheckATermList(u_6), term_k_74);
  return(t);
}
ATerm h_61 (ATerm t)
{
  t = term_l_79;
  return(t);
}
ATerm i_61 (ATerm t)
{
  ATerm v_6 = NULL;
  t = pass_verbose_0_0(t);
  v_6 = t;
  t = (ATerm) ATinsert(CheckATermList(v_6), term_k_74);
  return(t);
}
ATerm j_61 (ATerm t)
{
  t = term_l_79;
  return(t);
}
ATerm k_61 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_k_74);
  return(t);
}
ATerm l_61 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm m_61 (ATerm t)
{
  ATerm m_79 = t;
  int n_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_79 = t;
      int p_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_79);
        }
      else
        {
          t = o_79;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_79);
      t = xtc_transform_file_2_0(n_61, o_61, t);
    }
  else
    {
      t = m_79;
      t = xtc_transform_term_2_0(p_61, q_61, t);
    }
  return(t);
}
ATerm n_61 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm o_61 (ATerm t)
{
  ATerm x_6 = NULL;
  t = pass_verbose_0_0(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(x_6), term_k_74);
  return(t);
}
ATerm p_61 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm q_61 (ATerm t)
{
  ATerm y_6 = NULL;
  t = pass_verbose_0_0(t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(y_6), term_k_74);
  return(t);
}
ATerm r_61 (ATerm t)
{
  t = save_as_1_0(s_61, t);
  return(t);
}
ATerm s_61 (ATerm t)
{
  t = term_q_79;
  return(t);
}
ATerm t_61 (ATerm t)
{
  t = term_q_72;
  return(t);
}
ATerm u_61 (ATerm t)
{
  ATerm r_79 = t;
  int s_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_79 = t;
      int u_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(u_79);
        }
      else
        {
          t = t_79;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_79);
      t = xtc_transform_file_2_0(v_61, w_61, t);
    }
  else
    {
      t = r_79;
      t = xtc_transform_term_2_0(x_61, y_61, t);
    }
  return(t);
}
ATerm v_61 (ATerm t)
{
  t = term_v_79;
  return(t);
}
ATerm w_61 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_k_74);
  return(t);
}
ATerm x_61 (ATerm t)
{
  t = term_v_79;
  return(t);
}
ATerm y_61 (ATerm t)
{
  ATerm a_7 = NULL;
  t = pass_verbose_0_0(t);
  a_7 = t;
  t = (ATerm) ATinsert(CheckATermList(a_7), term_k_74);
  return(t);
}
ATerm z_61 (ATerm t)
{
  t = term_q_72;
  return(t);
}
ATerm a_62 (ATerm t)
{
  ATerm w_79 = t;
  int x_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_79 = t;
      int z_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(z_79);
        }
      else
        {
          t = y_79;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_79);
      t = xtc_transform_file_2_0(b_62, c_62, t);
    }
  else
    {
      t = w_79;
      t = xtc_transform_term_2_0(d_62, e_62, t);
    }
  return(t);
}
ATerm b_62 (ATerm t)
{
  t = term_a_80;
  return(t);
}
ATerm c_62 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_k_74);
  return(t);
}
ATerm d_62 (ATerm t)
{
  t = term_a_80;
  return(t);
}
ATerm e_62 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_k_74);
  return(t);
}
ATerm f_62 (ATerm t)
{
  t = save_as_1_0(g_62, t);
  return(t);
}
ATerm g_62 (ATerm t)
{
  t = term_b_80;
  return(t);
}
ATerm h_62 (ATerm t)
{
  t = term_b_77;
  return(t);
}
ATerm i_62 (ATerm t)
{
  ATerm c_80 = t;
  int d_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_80 = t;
      int f_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_80);
        }
      else
        {
          t = e_80;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_80);
      t = xtc_transform_file_2_0(j_62, k_62, t);
    }
  else
    {
      t = c_80;
      t = xtc_transform_term_2_0(l_62, m_62, t);
    }
  return(t);
}
ATerm j_62 (ATerm t)
{
  t = term_t_78;
  return(t);
}
ATerm k_62 (ATerm t)
{
  ATerm i_7 = NULL;
  t = pass_verbose_0_0(t);
  i_7 = t;
  t = (ATerm) ATinsert(CheckATermList(i_7), term_k_74);
  return(t);
}
ATerm l_62 (ATerm t)
{
  t = term_t_78;
  return(t);
}
ATerm m_62 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_k_74);
  return(t);
}
ATerm n_62 (ATerm t)
{
  t = save_as_1_0(o_62, t);
  return(t);
}
ATerm o_62 (ATerm t)
{
  t = term_g_80;
  return(t);
}
ATerm p_62 (ATerm t)
{
  t = term_b_77;
  return(t);
}
ATerm q_62 (ATerm t)
{
  ATerm h_80 = t;
  int i_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_80 = t;
      int k_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_80);
        }
      else
        {
          t = j_80;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(i_80);
      t = xtc_transform_file_2_0(r_62, s_62, t);
    }
  else
    {
      t = h_80;
      t = xtc_transform_term_2_0(t_62, u_62, t);
    }
  return(t);
}
ATerm r_62 (ATerm t)
{
  t = term_u_78;
  return(t);
}
ATerm s_62 (ATerm t)
{
  ATerm o_7 = NULL;
  t = pass_verbose_0_0(t);
  o_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), term_k_74);
  return(t);
}
ATerm t_62 (ATerm t)
{
  t = term_u_78;
  return(t);
}
ATerm u_62 (ATerm t)
{
  ATerm p_7 = NULL;
  t = pass_verbose_0_0(t);
  p_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), term_k_74);
  return(t);
}
ATerm v_62 (ATerm t)
{
  t = save_as_1_0(w_62, t);
  return(t);
}
ATerm w_62 (ATerm t)
{
  t = term_l_80;
  return(t);
}
ATerm x_62 (ATerm t)
{
  t = term_s_75;
  return(t);
}
ATerm y_62 (ATerm t)
{
  ATerm m_80 = t;
  int n_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_80 = t;
      int p_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_80);
        }
      else
        {
          t = o_80;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_80);
      t = xtc_transform_file_2_0(z_62, a_63, t);
    }
  else
    {
      t = m_80;
      t = xtc_transform_term_2_0(b_63, c_63, t);
    }
  return(t);
}
ATerm z_62 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm a_63 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_k_74);
  return(t);
}
ATerm b_63 (ATerm t)
{
  t = term_a_79;
  return(t);
}
ATerm c_63 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_k_74);
  return(t);
}
ATerm d_63 (ATerm t)
{
  t = save_as_1_0(e_63, t);
  return(t);
}
ATerm e_63 (ATerm t)
{
  t = term_q_80;
  return(t);
}
ATerm f_63 (ATerm t)
{
  t = term_s_75;
  return(t);
}
ATerm g_63 (ATerm t)
{
  ATerm r_80 = t;
  int s_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_80 = t;
      int u_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(u_80);
        }
      else
        {
          t = t_80;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_80);
      t = xtc_transform_file_2_0(h_63, i_63, t);
    }
  else
    {
      t = r_80;
      t = xtc_transform_term_2_0(j_63, k_63, t);
    }
  t = if_keep3_1_0(l_63, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(n_63, t);
  {
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_80 = t;
        int y_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(y_80);
          }
        else
          {
            t = x_80;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(w_80);
        t = xtc_transform_file_2_0(p_63, q_63, t);
      }
    else
      {
        t = v_80;
        t = xtc_transform_term_2_0(r_63, s_63, t);
      }
  }
  return(t);
}
ATerm h_63 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm i_63 (ATerm t)
{
  ATerm s_7 = NULL;
  t = pass_verbose_0_0(t);
  s_7 = t;
  t = (ATerm) ATinsert(CheckATermList(s_7), term_k_74);
  return(t);
}
ATerm j_63 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm k_63 (ATerm t)
{
  ATerm t_7 = NULL;
  t = pass_verbose_0_0(t);
  t_7 = t;
  t = (ATerm) ATinsert(CheckATermList(t_7), term_k_74);
  return(t);
}
ATerm l_63 (ATerm t)
{
  t = save_as_1_0(m_63, t);
  return(t);
}
ATerm m_63 (ATerm t)
{
  t = term_z_80;
  return(t);
}
ATerm n_63 (ATerm t)
{
  t = save_as_1_0(o_63, t);
  return(t);
}
ATerm o_63 (ATerm t)
{
  t = term_a_81;
  return(t);
}
ATerm p_63 (ATerm t)
{
  t = term_l_79;
  return(t);
}
ATerm q_63 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_k_74);
  return(t);
}
ATerm r_63 (ATerm t)
{
  t = term_l_79;
  return(t);
}
ATerm s_63 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_k_74);
  return(t);
}
ATerm t_63 (ATerm t)
{
  t = save_as_1_0(u_63, t);
  return(t);
}
ATerm u_63 (ATerm t)
{
  t = term_b_81;
  return(t);
}
ATerm v_63 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm w_63 (ATerm t)
{
  ATerm c_81 = t;
  int d_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_81 = t;
      int f_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_81);
        }
      else
        {
          t = e_81;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_81);
      t = xtc_transform_file_2_0(x_63, y_63, t);
    }
  else
    {
      t = c_81;
      t = xtc_transform_term_2_0(z_63, a_64, t);
    }
  return(t);
}
ATerm x_63 (ATerm t)
{
  t = term_g_81;
  return(t);
}
ATerm y_63 (ATerm t)
{
  ATerm z_7 = NULL;
  t = pass_verbose_0_0(t);
  z_7 = t;
  t = (ATerm) ATinsert(CheckATermList(z_7), term_k_74);
  return(t);
}
ATerm z_63 (ATerm t)
{
  t = term_g_81;
  return(t);
}
ATerm a_64 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_k_74);
  return(t);
}
ATerm b_64 (ATerm t)
{
  t = save_as_1_0(c_64, t);
  return(t);
}
ATerm c_64 (ATerm t)
{
  t = term_h_81;
  return(t);
}
ATerm d_64 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm e_64 (ATerm t)
{
  ATerm i_81 = t;
  int j_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_81 = t;
      int l_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_81);
        }
      else
        {
          t = k_81;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(j_81);
      t = xtc_transform_file_2_0(f_64, g_64, t);
    }
  else
    {
      t = i_81;
      t = xtc_transform_term_2_0(h_64, i_64, t);
    }
  return(t);
}
ATerm f_64 (ATerm t)
{
  t = term_m_81;
  return(t);
}
ATerm g_64 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_k_74);
  return(t);
}
ATerm h_64 (ATerm t)
{
  t = term_m_81;
  return(t);
}
ATerm i_64 (ATerm t)
{
  ATerm f_8 = NULL;
  t = pass_verbose_0_0(t);
  f_8 = t;
  t = (ATerm) ATinsert(CheckATermList(f_8), term_k_74);
  return(t);
}
ATerm j_64 (ATerm t)
{
  t = save_as_1_0(k_64, t);
  return(t);
}
ATerm k_64 (ATerm t)
{
  t = term_n_81;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_59, t);
  t = profile_p__2_0(l_59, m_59, t);
  return(t);
}
ATerm l_64 (ATerm t)
{
  t = term_o_81;
  return(t);
}
ATerm m_64 (ATerm t)
{
  ATerm i_8 = NULL;
  t = pass_verbose_0_0(t);
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(i_8), term_k_74);
  return(t);
}
ATerm n_64 (ATerm t)
{
  t = term_o_81;
  return(t);
}
ATerm o_64 (ATerm t)
{
  ATerm j_8 = NULL;
  t = pass_verbose_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_8), term_k_74);
  return(t);
}
ATerm p_64 (ATerm t)
{
  t = save_as_1_0(q_64, t);
  return(t);
}
ATerm q_64 (ATerm t)
{
  t = term_p_81;
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm q_81 = t;
  int r_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_81 = t;
      int t_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_81);
        }
      else
        {
          t = s_81;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(r_81);
      t = xtc_transform_file_2_0(l_64, m_64, t);
    }
  else
    {
      t = q_81;
      t = xtc_transform_term_2_0(n_64, o_64, t);
    }
  t = if_keep2_1_0(p_64, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_8 = NULL,m_8 = NULL,o_8 = NULL;
  t = term_m_72;
  {
    ATerm u_81 = t;
    int v_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,z_13 = NULL,e_14 = NULL,f_14 = NULL;
        e_14 = t;
        t = term_n_72;
        x_13 = t;
        t = e_14;
        f_14 = t;
        t = term_m_72;
        z_13 = t;
        t = SSL_table_get(x_13, z_13);
        {
          ATerm w_81 = t;
          int x_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL,g_14 = NULL,m_14 = NULL,o_14 = NULL,p_14 = NULL;
              t = eval_config_0_0(t);
              s_13 = t;
              o_14 = t;
              t = term_n_72;
              g_14 = t;
              t = o_14;
              p_14 = t;
              t = term_m_72;
              m_14 = t;
              t = SSL_table_put(g_14, m_14, s_13);
              t = s_13;
              ;
              LocalPopChoice(x_81);
            }
          else
            {
              t = w_81;
            }
        }
        ;
        LocalPopChoice(v_81);
      }
    else
      {
        t = u_81;
        t = term_l_75;
      }
    k_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_8, term_l_75);
    {
      ATerm y_81 = t;
      int z_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL,z_14 = NULL;
          z_14 = t;
          t = term_l_75;
          s_14 = t;
          t = SSL_subti(k_8, s_14);
          ;
          LocalPopChoice(z_81);
        }
      else
        {
          t = y_81;
          {
            ATerm a_15 = NULL,b_15 = NULL;
            b_15 = t;
            t = term_l_75;
            a_15 = t;
            t = SSL_subtr(k_8, a_15);
          }
        }
      o_8 = t;
      t = SSL_int_to_string(o_8);
      m_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_8), term_m_72);
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
ATerm r_64 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_explode_string(q_8);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  t = map_1_0(r_64, t);
  t = concat_0_0(t);
  p_8 = t;
  t = SSL_implode_string(p_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm d_14 = NULL;
        t = SSL_int_to_string(m_9);
        d_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_82), d_14), term_a_82);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm s_15 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          m_9 = ATgetArgument(t, 0);
          n_9 = ATgetArgument(t, 1);
          o_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_9);
      s_15 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_9), term_d_82), s_15), term_c_82), m_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  ATerm s_64 (ATerm t)
  {
    t = t_93(t);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    return(t);
  }
  t = fetch_1_0(s_64, t);
  t = not_null(r_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_86), term_g_86), term_c_86), term_y_85), term_v_85), term_r_85), term_n_85), term_h_85), term_d_85), term_z_84), term_v_84), term_r_84), term_n_84), term_j_84), term_f_84), term_b_84), term_x_83), term_u_83), term_q_83), term_m_83), term_i_83), term_e_83), term_a_83), term_w_82), term_s_82), term_o_82), term_l_82), term_i_82);
        {
          ATerm t_64 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm n_86 = ATgetArgument(t, 0);
                if((s_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm o_86 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(t_64, t);
        }
        ;
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm p_86 = t;
    int q_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,q_16 = NULL,c_15 = NULL,d_15 = NULL,g_15 = NULL,j_15 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_86 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
            {
              ATerm t_86 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_10;
        {
          ATerm u_86 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_86;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          q_16 = t;
          g_15 = t;
          t = term_r_72;
          c_15 = t;
          t = g_15;
          j_15 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_16), term_v_86);
          d_15 = t;
          t = SSL_printnl(c_15, d_15);
          t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(ATinsert(ATempty, q_16), term_v_86));
        }
        ;
        LocalPopChoice(q_86);
      }
    else
      {
        t = p_86;
      }
    t = x_9;
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
    ATerm w_86 = t;
    int x_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_10;
        t = t_108(t);
        ;
        LocalPopChoice(x_86);
      }
    else
      {
        t = w_86;
        t = SSL_waitpid(l_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_86 = ATgetArgument(t, 0);
            if(((ATgetType(y_86) != AT_INT) || (ATgetInt((ATermInt) y_86) != 0)))
              _fail(t);
            {
              ATerm z_86 = ATgetArgument(t, 1);
            }
            {
              ATerm a_87 = ATgetArgument(t, 2);
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
      ATerm u_19 = NULL,c_20 = NULL,h_22 = NULL,j_22 = NULL;
      t = r_11;
      t = xtc_new_file_0_0(t);
      u_19 = t;
      t = n_0(t);
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATinsert(ATinsert(ATempty, u_19), term_v_72));
      {
        ATerm b_87 = t;
        int c_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm d_87 = ATgetArgument(t, 0);
                ATerm e_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_20;
            {
              ATerm u_64 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, u_19), term_v_72);
                return(t);
              }
              t = at_end_1_0(u_64, t);
            }
            ;
            LocalPopChoice(c_87);
          }
        else
          {
            t = b_87;
            {
              ATerm f_22 = NULL,k_15 = NULL,m_15 = NULL;
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATinsert(ATinsert(ATempty, u_19), term_v_72));
              k_15 = t;
              t = SSL_explode_term(k_15);
              if(match_cons(t, sym__2))
                {
                  ATerm f_87 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_87) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  f_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_22;
              t = concat_0_0(t);
            }
          }
        h_22 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, h_22);
        {
          ATerm v_64 (ATerm t)
          {
            t = SSL_execvp(j_22, h_22);
            return(t);
          }
          t = fork_and_wait_1_0(v_64, t);
          t = SSL_close_file(u_19);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
        }
      }
    }
  else
    {
      ATerm l_23 = NULL,m_23 = NULL,h_25 = NULL,j_25 = NULL;
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
      t = (ATerm) ATmakeAppl(sym__2, m_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), term_v_72), s_11), term_g_87));
      {
        ATerm h_87 = t;
        int i_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm j_87 = ATgetArgument(t, 0);
                ATerm k_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_23;
            {
              ATerm w_64 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), term_v_72), s_11), term_g_87);
                return(t);
              }
              t = at_end_1_0(w_64, t);
            }
            ;
            LocalPopChoice(i_87);
          }
        else
          {
            t = h_87;
            {
              ATerm z_24 = NULL,n_15 = NULL,p_15 = NULL;
              p_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), term_v_72), s_11), term_g_87));
              n_15 = t;
              t = SSL_explode_term(n_15);
              if(match_cons(t, sym__2))
                {
                  ATerm l_87 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_87) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  z_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_24;
              t = concat_0_0(t);
            }
          }
        h_25 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, h_25);
        {
          ATerm x_64 (ATerm t)
          {
            t = SSL_execvp(j_25, h_25);
            return(t);
          }
          t = fork_and_wait_1_0(x_64, t);
          t = SSL_close_file(l_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_23);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,r_15 = NULL,t_15 = NULL;
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
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_11);
  r_15 = t;
  t = SSLsetAnnotations(r_15, v_11);
  return(t);
}
ATerm y_64 (ATerm t)
{
  t = term_m_87;
  return(t);
}
ATerm z_64 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  t = pass_verbose_0_0(t);
  d_12 = t;
  t = term_n_87;
  w_15 = t;
  t = term_n_72;
  u_15 = t;
  t = w_15;
  x_15 = t;
  t = term_n_87;
  v_15 = t;
  t = SSL_table_get(u_15, v_15);
  {
    ATerm o_87 = t;
    int p_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
        t = eval_config_0_0(t);
        f_26 = t;
        b_16 = t;
        t = term_n_72;
        z_15 = t;
        t = b_16;
        c_16 = t;
        t = term_n_87;
        a_16 = t;
        t = SSL_table_put(z_15, a_16, f_26);
        t = f_26;
        ;
        LocalPopChoice(p_87);
      }
    else
      {
        t = o_87;
      }
    t = map_1_0(a_65, t);
    e_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(e_12), (ATerm) ATinsert(ATempty, term_k_74)), d_12);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm a_65 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_12), term_n_87);
  return(t);
}
ATerm b_65 (ATerm t)
{
  t = term_m_87;
  return(t);
}
ATerm c_65 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  t = pass_verbose_0_0(t);
  h_12 = t;
  t = term_n_87;
  f_16 = t;
  t = term_n_72;
  d_16 = t;
  t = f_16;
  g_16 = t;
  t = term_n_87;
  e_16 = t;
  t = SSL_table_get(d_16, e_16);
  {
    ATerm q_87 = t;
    int r_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
        t = eval_config_0_0(t);
        r_26 = t;
        j_16 = t;
        t = term_n_72;
        h_16 = t;
        t = j_16;
        k_16 = t;
        t = term_n_87;
        i_16 = t;
        t = SSL_table_put(h_16, i_16, r_26);
        t = r_26;
        ;
        LocalPopChoice(r_87);
      }
    else
      {
        t = q_87;
      }
    t = map_1_0(d_65, t);
    i_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_12), (ATerm) ATinsert(ATempty, term_k_74)), h_12);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm d_65 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_12), term_n_87);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm s_87 = t;
  int t_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_87 = t;
      int v_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_87);
        }
      else
        {
          t = u_87;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(t_87);
      t = xtc_transform_file_2_0(y_64, z_64, t);
    }
  else
    {
      t = s_87;
      t = xtc_transform_term_2_0(b_65, c_65, t);
    }
  return(t);
}
ATerm e_65 (ATerm t)
{
  t = term_w_87;
  return(t);
}
ATerm f_65 (ATerm t)
{
  ATerm k_12 = NULL;
  t = pass_verbose_0_0(t);
  k_12 = t;
  t = (ATerm) ATinsert(CheckATermList(k_12), term_k_74);
  return(t);
}
ATerm g_65 (ATerm t)
{
  t = term_w_87;
  return(t);
}
ATerm h_65 (ATerm t)
{
  ATerm l_12 = NULL;
  t = pass_verbose_0_0(t);
  l_12 = t;
  t = (ATerm) ATinsert(CheckATermList(l_12), term_k_74);
  return(t);
}
ATerm i_65 (ATerm t)
{
  t = save_as_1_0(j_65, t);
  return(t);
}
ATerm j_65 (ATerm t)
{
  t = term_x_87;
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm y_87 = t;
  int z_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_88 = t;
      int b_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(b_88);
        }
      else
        {
          t = a_88;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(z_87);
      t = xtc_transform_file_2_0(e_65, f_65, t);
    }
  else
    {
      t = y_87;
      t = xtc_transform_term_2_0(g_65, h_65, t);
    }
  t = if_keep2_1_0(i_65, t);
  return(t);
}
ATerm k_65 (ATerm t)
{
  t = term_c_88;
  return(t);
}
ATerm l_65 (ATerm t)
{
  ATerm h_28 = NULL;
  t = pass_verbose_0_0(t);
  h_28 = t;
  t = (ATerm) ATinsert(CheckATermList(h_28), term_k_74);
  return(t);
}
ATerm m_65 (ATerm t)
{
  t = term_c_88;
  return(t);
}
ATerm n_65 (ATerm t)
{
  ATerm i_28 = NULL;
  t = pass_verbose_0_0(t);
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), term_k_74);
  return(t);
}
ATerm o_65 (ATerm t)
{
  ATerm q_29 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  t = term_y_72;
  g_18 = t;
  t = term_n_72;
  e_18 = t;
  t = g_18;
  h_18 = t;
  t = term_y_72;
  f_18 = t;
  t = SSL_table_get(e_18, f_18);
  {
    ATerm d_88 = t;
    int e_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,p_18 = NULL;
        t = eval_config_0_0(t);
        q_30 = t;
        l_18 = t;
        t = term_n_72;
        j_18 = t;
        t = l_18;
        p_18 = t;
        t = term_y_72;
        k_18 = t;
        t = SSL_table_put(j_18, k_18, q_30);
        t = q_30;
        ;
        LocalPopChoice(e_88);
      }
    else
      {
        t = d_88;
      }
    q_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_29, term_f_88);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm g_88 = t;
  int h_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,g_28 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
      v_12 = t;
      t = term_i_88;
      n_16 = t;
      t = term_n_72;
      l_16 = t;
      t = n_16;
      o_16 = t;
      t = term_i_88;
      m_16 = t;
      t = SSL_table_get(l_16, m_16);
      {
        ATerm j_88 = t;
        int k_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_29 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL;
            t = eval_config_0_0(t);
            e_29 = t;
            u_16 = t;
            t = term_n_72;
            s_16 = t;
            t = u_16;
            w_16 = t;
            t = term_i_88;
            t_16 = t;
            t = SSL_table_put(s_16, t_16, e_29);
            t = e_29;
            ;
            LocalPopChoice(k_88);
          }
        else
          {
            t = j_88;
          }
        t = v_12;
        {
          ATerm l_88 = t;
          int m_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_88 = t;
              int o_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_88 = t;
                  int q_88 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(q_88);
                    }
                  else
                    {
                      t = p_88;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(o_88);
                  t = xtc_transform_file_2_0(k_65, l_65, t);
                }
              else
                {
                  t = n_88;
                  t = xtc_transform_term_2_0(m_65, n_65, t);
                }
              ;
              LocalPopChoice(m_88);
            }
          else
            {
              t = l_88;
              {
                ATerm c_17 = NULL,r_17 = NULL,t_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
                t_17 = t;
                t = term_r_72;
                c_17 = t;
                t = t_17;
                b_18 = t;
                t = (ATerm) ATinsert(ATempty, term_r_88);
                r_17 = t;
                t = SSL_printnl(c_17, r_17);
                d_18 = t;
                t = term_l_75;
                c_18 = t;
                t = SSL_exit(c_18);
                t = (ATerm) ATinsert(ATempty, term_r_88);
              }
            }
          t = copy_to_1_0(o_65, t);
          g_28 = t;
          s_18 = t;
          t = term_r_72;
          q_18 = t;
          t = s_18;
          t_18 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_88));
          r_18 = t;
          t = SSL_printnl(q_18, r_18);
          t = g_28;
          t = xtc_io_exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(h_88);
    }
  else
    {
      t = g_88;
    }
  return(t);
}
ATerm if_keep2_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm t_88 = t;
  int u_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,z_12 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
      x_12 = t;
      t = term_e_76;
      y_18 = t;
      t = term_n_72;
      w_18 = t;
      t = y_18;
      z_18 = t;
      t = term_e_76;
      x_18 = t;
      t = SSL_table_get(w_18, x_18);
      {
        ATerm v_88 = t;
        int w_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_30 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
            t = eval_config_0_0(t);
            z_30 = t;
            c_19 = t;
            t = term_n_72;
            a_19 = t;
            t = c_19;
            d_19 = t;
            t = term_e_76;
            b_19 = t;
            t = SSL_table_put(a_19, b_19, z_30);
            t = z_30;
            ;
            LocalPopChoice(w_88);
          }
        else
          {
            t = v_88;
          }
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_12, term_q_72);
        t = geq_0_0(t);
        t = x_12;
        t = j_108(t);
      }
      ;
      LocalPopChoice(u_88);
    }
  else
    {
      t = t_88;
    }
  return(t);
}
ATerm p_65 (ATerm t)
{
  t = term_x_88;
  return(t);
}
ATerm q_65 (ATerm t)
{
  ATerm a_13 = NULL;
  t = pass_verbose_0_0(t);
  a_13 = t;
  t = (ATerm) ATinsert(CheckATermList(a_13), term_k_74);
  return(t);
}
ATerm r_65 (ATerm t)
{
  t = term_x_88;
  return(t);
}
ATerm s_65 (ATerm t)
{
  ATerm b_13 = NULL;
  t = pass_verbose_0_0(t);
  b_13 = t;
  t = (ATerm) ATinsert(CheckATermList(b_13), term_k_74);
  return(t);
}
ATerm t_65 (ATerm t)
{
  t = save_as_1_0(u_65, t);
  return(t);
}
ATerm u_65 (ATerm t)
{
  t = term_y_88;
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm z_88 = t;
  int a_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_89 = t;
      int c_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(c_89);
        }
      else
        {
          t = b_89;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(a_89);
      t = xtc_transform_file_2_0(p_65, q_65, t);
    }
  else
    {
      t = z_88;
      t = xtc_transform_term_2_0(r_65, s_65, t);
    }
  t = if_keep2_1_0(t_65, t);
  return(t);
}
ATerm w_65 (ATerm t)
{
  t = term_d_89;
  return(t);
}
ATerm x_65 (ATerm t)
{
  ATerm f_13 = NULL;
  t = pass_verbose_0_0(t);
  f_13 = t;
  t = (ATerm) ATinsert(CheckATermList(f_13), term_e_89);
  return(t);
}
ATerm y_65 (ATerm t)
{
  t = term_d_89;
  return(t);
}
ATerm z_65 (ATerm t)
{
  ATerm g_13 = NULL;
  t = pass_verbose_0_0(t);
  g_13 = t;
  t = (ATerm) ATinsert(CheckATermList(g_13), term_e_89);
  return(t);
}
ATerm save_as_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  c_13 = t;
  {
    ATerm v_65 (ATerm t)
    {
      ATerm b_31 = NULL,d_31 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
      t = l_85(t);
      b_31 = t;
      t = term_y_72;
      j_19 = t;
      t = term_n_72;
      h_19 = t;
      t = j_19;
      k_19 = t;
      t = term_y_72;
      i_19 = t;
      t = SSL_table_get(h_19, i_19);
      {
        ATerm f_89 = t;
        int g_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_31 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,t_19 = NULL;
            t = eval_config_0_0(t);
            i_31 = t;
            n_19 = t;
            t = term_n_72;
            l_19 = t;
            t = n_19;
            t_19 = t;
            t = term_y_72;
            m_19 = t;
            t = SSL_table_put(l_19, m_19, i_31);
            t = i_31;
            ;
            LocalPopChoice(g_89);
          }
        else
          {
            t = f_89;
          }
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_31, b_31);
        t = conc_strings_0_0(t);
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
      }
      return(t);
    }
    t = copy_to_1_0(v_65, t);
    {
      ATerm h_89 = t;
      int i_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_89 = t;
          int k_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(k_89);
            }
          else
            {
              t = j_89;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(i_89);
          t = xtc_transform_file_2_0(w_65, x_65, t);
        }
      else
        {
          t = h_89;
          t = xtc_transform_term_2_0(y_65, z_65, t);
        }
      {
        ATerm a_66 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_l_89);
          t = conc_strings_0_0(t);
          if(((e_13 != NULL) && (e_13 != t)))
            _fail(t);
          else
            e_13 = t;
          return(t);
        }
        t = copy_to_1_0(a_66, t);
        a_20 = t;
        t = term_r_72;
        y_19 = t;
        t = a_20;
        b_20 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_13)), term_n_89), not_null(d_13)), term_m_89));
        z_19 = t;
        t = SSL_printnl(y_19, z_19);
        t = c_13;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm o_89 = t;
  int p_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL,j_13 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
      h_13 = t;
      t = term_e_76;
      h_20 = t;
      t = term_n_72;
      f_20 = t;
      t = h_20;
      i_20 = t;
      t = term_e_76;
      g_20 = t;
      t = SSL_table_get(f_20, g_20);
      {
        ATerm q_89 = t;
        int r_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_31 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL,o_20 = NULL;
            t = eval_config_0_0(t);
            t_31 = t;
            n_20 = t;
            t = term_n_72;
            k_20 = t;
            t = n_20;
            o_20 = t;
            t = term_e_76;
            l_20 = t;
            t = SSL_table_put(k_20, l_20, t_31);
            t = t_31;
            ;
            LocalPopChoice(r_89);
          }
        else
          {
            t = q_89;
          }
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_s_75);
        t = geq_0_0(t);
        t = h_13;
        t = k_108(t);
      }
      ;
      LocalPopChoice(p_89);
    }
  else
    {
      t = o_89;
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
  t = term_s_89;
  t = k_85(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(k_13), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_t_89, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_13), (ATerm) ATempty))))));
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
  t = (ATerm) ATmakeAppl(sym__2, m_13, term_u_89);
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,r_21 = NULL,s_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_104(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_13, p_13, q_13);
  t = table_push_0_0(t);
  {
    ATerm v_89 = t;
    int w_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL,d_21 = NULL;
        d_21 = t;
        t = term_x_89;
        b_21 = t;
        t = SSL_table_get(r_13, b_21);
        ;
        LocalPopChoice(w_89);
      }
    else
      {
        t = v_89;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_13 = ATgetFirst((ATermList) t);
        u_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    v_21 = t;
    t = term_x_89;
    r_21 = t;
    t = v_21;
    w_21 = t;
    t = (ATerm) ATinsert(CheckATermList(u_13), (ATerm) ATinsert(CheckATermList(t_13), p_13));
    s_21 = t;
    t = SSL_table_put(r_13, r_21, s_21);
    t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  }
  return(t);
}
ATerm k_14 (ATerm y_13, ATerm t)
{
  ATerm x_21 = NULL,z_21 = NULL,b_22 = NULL,c_22 = NULL;
  t = y_13;
  {
    ATerm y_89 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_89 = ATgetArgument(t, 0);
            ATerm a_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_89;
      }
    t = term_b_90;
    b_22 = t;
    t = term_r_72;
    x_21 = t;
    t = b_22;
    c_22 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_c_90), term_b_90);
    z_21 = t;
    t = SSL_printnl(x_21, z_21);
    t = (ATerm) ATmakeAppl(sym__2, y_13, term_u_89);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_14 (ATerm a_14, ATerm b_14, ATerm c_14, ATerm t)
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
        ATerm d_90 = t;
        int e_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_14(h_14, t);
            ;
            LocalPopChoice(e_90);
          }
        else
          {
            t = d_90;
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
  t = term_s_89;
  t = new_0_0(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, term_f_90);
  t = conc_strings_0_0(t);
  {
    ATerm g_90 = t;
    int h_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL,d_22 = NULL,e_22 = NULL;
        q_14 = t;
        e_22 = t;
        t = (ATerm) ATinsert(ATempty, term_i_90);
        d_22 = t;
        t = SSL_access(q_14, d_22);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(h_90);
      }
    else
      {
        t = g_90;
      }
  }
  return(t);
}
ATerm b_66 (ATerm t)
{
  t = term_j_90;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t = new_file_0_0(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_14, term_u_89);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, term_s_89);
  t = assert_1_0(b_66, t);
  t = t_14;
  return(t);
}
ATerm c_66 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_90 = ATgetArgument(t, 0);
      if(match_cons(k_90, sym_Stream_1))
        {
          w_14 = ATgetArgument(k_90, 0);
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
  t = WriteToFile_1_0(c_66, t);
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
      t = term_l_90;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_22 = NULL,i_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_15;
      i_22 = t;
      t = (ATerm) ATinsert(ATempty, term_i_90);
      g_22 = t;
      t = SSL_access(f_15, g_22);
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
ATerm d_66 (ATerm t)
{
  ATerm j_33 = NULL,u_22 = NULL,v_22 = NULL,z_22 = NULL,a_23 = NULL;
  j_33 = t;
  t = term_m_90;
  z_22 = t;
  t = term_r_72;
  u_22 = t;
  t = z_22;
  a_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_33), term_m_90);
  v_22 = t;
  t = SSL_printnl(u_22, v_22);
  t = j_33;
  return(t);
}
ATerm g_66 (ATerm t)
{
  t = save_as_1_0(h_66, t);
  return(t);
}
ATerm h_66 (ATerm t)
{
  t = term_n_90;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm o_90 = t;
  int p_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_15 = NULL,l_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL;
      i_15 = t;
      t = term_q_90;
      o_22 = t;
      t = term_n_72;
      l_22 = t;
      t = o_22;
      p_22 = t;
      t = term_q_90;
      m_22 = t;
      t = SSL_table_get(l_22, m_22);
      {
        ATerm r_90 = t;
        int s_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_33 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
            t = eval_config_0_0(t);
            i_33 = t;
            s_22 = t;
            t = term_n_72;
            q_22 = t;
            t = s_22;
            t_22 = t;
            t = term_q_90;
            r_22 = t;
            t = SSL_table_put(q_22, r_22, i_33);
            t = i_33;
            ;
            LocalPopChoice(s_90);
          }
        else
          {
            t = r_90;
          }
        h_15 = t;
        t = if_verbose2_1_0(d_66, t);
        t = i_15;
        {
          ATerm e_66 (ATerm t)
          {
            ATerm f_66 (ATerm t)
            {
              t = h_15;
              return(t);
            }
            t = AddMain_1_0(f_66, t);
            return(t);
          }
          t = xtc_io_transform_1_0(e_66, t);
        }
      }
      ;
      LocalPopChoice(p_90);
    }
  else
    {
      t = o_90;
    }
  t = if_keep3_1_0(g_66, t);
  return(t);
}
ATerm j_66 (ATerm t)
{
  ATerm t_90 = t;
  int u_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_15 = NULL;
      y_15 = t;
      t = SSL_remove(y_15);
      ;
      LocalPopChoice(u_90);
    }
  else
    {
      t = t_90;
    }
  return(t);
}
ATerm k_66 (ATerm t)
{
  t = term_j_90;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL;
  ATerm i_66 (ATerm t)
  {
    ATerm q_15 = NULL,c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
    q_15 = t;
    f_23 = t;
    t = term_j_90;
    c_23 = t;
    t = f_23;
    g_23 = t;
    t = term_x_89;
    e_23 = t;
    t = SSL_table_get(c_23, e_23);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_15 != NULL) && (l_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_15 = ATgetFirst((ATermList) t);
        {
          ATerm v_90 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(l_15);
    t = map_1_0(j_66, t);
    t = q_15;
    t = end_scope_1_0(k_66, t);
    return(t);
  }
  t = repeat_1_0(i_66, t);
  o_15 = t;
  t = SSL_exit(o_15);
  return(t);
}
ATerm l_66 (ATerm t)
{
  ATerm w_90 = t;
  int x_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
      t = term_v_72;
      t_23 = t;
      t = term_n_72;
      h_23 = t;
      t = t_23;
      u_23 = t;
      t = term_v_72;
      s_23 = t;
      t = SSL_table_get(h_23, s_23);
      {
        ATerm y_90 = t;
        int z_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_33 = NULL,w_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
            t = eval_config_0_0(t);
            y_33 = t;
            c_24 = t;
            t = term_n_72;
            w_23 = t;
            t = c_24;
            d_24 = t;
            t = term_v_72;
            b_24 = t;
            t = SSL_table_put(w_23, b_24, y_33);
            t = y_33;
            ;
            LocalPopChoice(z_90);
          }
        else
          {
            t = y_90;
          }
      }
      ;
      LocalPopChoice(x_90);
    }
  else
    {
      t = w_90;
      t = term_a_74;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(l_66, t);
  t = term_x_33;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_91 = t;
    int b_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL;
        t = p_16;
        t = p_0(t);
        d_36 = t;
        {
          ATerm c_91 = t;
          int d_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_91);
            }
          else
            {
              t = c_91;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(r_16, d_36);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
        }
        ;
        LocalPopChoice(b_91);
      }
    else
      {
        t = a_91;
        {
          ATerm e_91 = t;
          int f_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_36 = NULL;
              t = p_16;
              t = p_0(t);
              m_36 = t;
              {
                ATerm g_91 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_91 = t;
                    int i_91 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_91);
                      }
                    else
                      {
                        t = h_91;
                        {
                          ATerm j_91 = t;
                          int k_91 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_91);
                            }
                          else
                            {
                              t = j_91;
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
                    t = g_91;
                  }
                t = SSL_copy(r_16, m_36);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
              }
              ;
              LocalPopChoice(f_91);
            }
          else
            {
              t = e_91;
              t = p_16;
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
ATerm m_66 (ATerm t)
{
  ATerm w_36 = NULL,n_24 = NULL,q_24 = NULL,v_24 = NULL,w_24 = NULL;
  t = term_y_72;
  v_24 = t;
  t = term_n_72;
  n_24 = t;
  t = v_24;
  w_24 = t;
  t = term_y_72;
  q_24 = t;
  t = SSL_table_get(n_24, q_24);
  {
    ATerm l_91 = t;
    int m_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,x_24 = NULL,y_24 = NULL,a_25 = NULL,p_25 = NULL;
        t = eval_config_0_0(t);
        b_37 = t;
        a_25 = t;
        t = term_n_72;
        x_24 = t;
        t = a_25;
        p_25 = t;
        t = term_y_72;
        y_24 = t;
        t = SSL_table_put(x_24, y_24, b_37);
        t = b_37;
        ;
        LocalPopChoice(m_91);
      }
    else
      {
        t = l_91;
      }
    w_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_36, term_n_91);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm o_91 = t;
  int p_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,x_16 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
      v_16 = t;
      t = term_q_91;
      g_24 = t;
      t = term_n_72;
      e_24 = t;
      t = g_24;
      h_24 = t;
      t = term_q_91;
      f_24 = t;
      t = SSL_table_get(e_24, f_24);
      {
        ATerm r_91 = t;
        int s_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_36 = NULL,i_24 = NULL,j_24 = NULL,l_24 = NULL,m_24 = NULL;
            t = eval_config_0_0(t);
            t_36 = t;
            l_24 = t;
            t = term_n_72;
            i_24 = t;
            t = l_24;
            m_24 = t;
            t = term_q_91;
            j_24 = t;
            t = SSL_table_put(i_24, j_24, t_36);
            t = t_36;
            ;
            LocalPopChoice(s_91);
          }
        else
          {
            t = r_91;
          }
        t = v_16;
        t = copy_to_1_0(m_66, t);
        x_16 = t;
        t = (ATerm) ATinsert(ATempty, term_t_91);
        t = echo_0_0(t);
        t = x_16;
        t = xtc_io_exit_0_0(t);
      }
      ;
      LocalPopChoice(p_91);
    }
  else
    {
      t = o_91;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  t = term_e_76;
  {
    ATerm u_91 = t;
    int v_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL,t_25 = NULL,a_26 = NULL,b_26 = NULL;
        a_26 = t;
        t = term_n_72;
        r_25 = t;
        t = a_26;
        b_26 = t;
        t = term_e_76;
        t_25 = t;
        t = SSL_table_get(r_25, t_25);
        {
          ATerm w_91 = t;
          int x_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_37 = NULL,c_26 = NULL,d_26 = NULL,g_26 = NULL,k_26 = NULL;
              t = eval_config_0_0(t);
              f_37 = t;
              g_26 = t;
              t = term_n_72;
              c_26 = t;
              t = g_26;
              k_26 = t;
              t = term_e_76;
              d_26 = t;
              t = SSL_table_put(c_26, d_26, f_37);
              t = f_37;
              ;
              LocalPopChoice(x_91);
            }
          else
            {
              t = w_91;
            }
        }
        ;
        LocalPopChoice(v_91);
      }
    else
      {
        t = u_91;
        t = term_l_75;
      }
    y_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_16, term_l_75);
    {
      ATerm y_91 = t;
      int z_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = NULL,m_26 = NULL;
          m_26 = t;
          t = term_l_75;
          l_26 = t;
          t = SSL_subti(y_16, l_26);
          ;
          LocalPopChoice(z_91);
        }
      else
        {
          t = y_91;
          {
            ATerm n_26 = NULL,p_26 = NULL;
            p_26 = t;
            t = term_l_75;
            n_26 = t;
            t = SSL_subtr(y_16, n_26);
          }
        }
      a_17 = t;
      t = SSL_int_to_string(a_17);
      z_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_16), term_e_76);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm a_92 = t;
  int b_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,d_17 = NULL,q_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
      b_17 = t;
      t = term_m_72;
      x_26 = t;
      t = term_n_72;
      q_26 = t;
      t = x_26;
      y_26 = t;
      t = term_m_72;
      w_26 = t;
      t = SSL_table_get(q_26, w_26);
      {
        ATerm c_92 = t;
        int d_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_37 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
            t = eval_config_0_0(t);
            j_37 = t;
            b_27 = t;
            t = term_n_72;
            z_26 = t;
            t = b_27;
            c_27 = t;
            t = term_m_72;
            a_27 = t;
            t = SSL_table_put(z_26, a_27, j_37);
            t = j_37;
            ;
            LocalPopChoice(d_92);
          }
        else
          {
            t = c_92;
          }
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_s_75);
        t = geq_0_0(t);
        t = b_17;
        t = i_107(t);
      }
      ;
      LocalPopChoice(b_92);
    }
  else
    {
      t = a_92;
    }
  return(t);
}
ATerm n_66 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm o_66 (ATerm t)
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
    ATerm e_92 = t;
    int f_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 (ATerm t)
        {
          ATerm g_92 = t;
          int h_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, g_17, t);
              ;
              LocalPopChoice(h_92);
            }
          else
            {
              t = g_92;
              {
                ATerm i_92 = t;
                int j_92 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(n_66, _id, t);
                    ;
                    LocalPopChoice(j_92);
                  }
                else
                  {
                    t = i_92;
                    t = Cons_2_0(o_66, e_102, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = g_17(t);
        ;
        LocalPopChoice(f_92);
      }
    else
      {
        t = e_92;
      }
    f_17 = t;
    t = SSL_implode_string(f_17);
  }
  return(t);
}
ATerm p_66 (ATerm t)
{
  ATerm k_37 = NULL,d_27 = NULL,i_27 = NULL,k_27 = NULL,l_27 = NULL;
  k_37 = t;
  t = term_k_92;
  k_27 = t;
  t = term_r_72;
  d_27 = t;
  t = k_27;
  l_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_37), term_k_92);
  i_27 = t;
  t = SSL_printnl(d_27, i_27);
  t = k_37;
  return(t);
}
ATerm q_66 (ATerm t)
{
  ATerm r_37 = NULL,f_28 = NULL,j_28 = NULL,q_28 = NULL,s_28 = NULL;
  r_37 = t;
  t = term_l_92;
  q_28 = t;
  t = term_r_72;
  f_28 = t;
  t = q_28;
  s_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_l_92);
  j_28 = t;
  t = SSL_printnl(f_28, j_28);
  t = r_37;
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,m_27 = NULL,n_27 = NULL,r_27 = NULL,t_27 = NULL,c_29 = NULL,l_29 = NULL,o_29 = NULL,p_29 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_17;
  t = basename_1_0(_id, t);
  i_17 = t;
  t = if_verbose3_1_0(p_66, t);
  r_27 = t;
  t = term_n_72;
  m_27 = t;
  t = r_27;
  t_27 = t;
  t = term_m_92;
  n_27 = t;
  t = SSL_table_put(m_27, n_27, i_17);
  t = (ATerm) ATmakeAppl(sym__3, term_n_72, term_m_92, i_17);
  {
    ATerm n_92 = t;
    int o_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
        t = term_v_72;
        z_27 = t;
        t = term_n_72;
        v_27 = t;
        t = z_27;
        a_28 = t;
        t = term_v_72;
        y_27 = t;
        t = SSL_table_get(v_27, y_27);
        {
          ATerm p_92 = t;
          int q_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
              t = eval_config_0_0(t);
              q_37 = t;
              d_28 = t;
              t = term_n_72;
              b_28 = t;
              t = d_28;
              e_28 = t;
              t = term_v_72;
              c_28 = t;
              t = SSL_table_put(b_28, c_28, q_37);
              t = q_37;
              ;
              LocalPopChoice(q_92);
            }
          else
            {
              t = p_92;
            }
          t = basename_1_0(_id, t);
        }
        ;
        LocalPopChoice(o_92);
      }
    else
      {
        t = n_92;
        t = i_17;
      }
    j_17 = t;
    t = if_verbose3_1_0(q_66, t);
    o_29 = t;
    t = term_n_72;
    c_29 = t;
    t = o_29;
    p_29 = t;
    t = term_y_72;
    l_29 = t;
    t = SSL_table_put(c_29, l_29, j_17);
    t = (ATerm) ATmakeAppl(sym_FILE_1, i_17);
  }
  return(t);
}
ATerm r_66 (ATerm t)
{
  t = term_r_92;
  return(t);
}
ATerm s_66 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,a_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  k_17 = t;
  {
    ATerm s_92 = t;
    int t_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,s_29 = NULL,a_30 = NULL,b_30 = NULL;
        t = term_v_72;
        a_30 = t;
        t = term_n_72;
        r_29 = t;
        t = a_30;
        b_30 = t;
        t = term_v_72;
        s_29 = t;
        t = SSL_table_get(r_29, s_29);
        {
          ATerm u_92 = t;
          int v_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_37 = NULL,c_30 = NULL,d_30 = NULL,l_30 = NULL,m_30 = NULL;
              t = eval_config_0_0(t);
              x_37 = t;
              l_30 = t;
              t = term_n_72;
              c_30 = t;
              t = l_30;
              m_30 = t;
              t = term_v_72;
              d_30 = t;
              t = SSL_table_put(c_30, d_30, x_37);
              t = x_37;
              ;
              LocalPopChoice(v_92);
            }
          else
            {
              t = u_92;
            }
        }
        ;
        LocalPopChoice(t_92);
      }
    else
      {
        t = s_92;
        {
          ATerm n_30 = NULL,o_30 = NULL,t_30 = NULL,u_30 = NULL;
          t = term_y_72;
          t_30 = t;
          t = term_n_72;
          n_30 = t;
          t = t_30;
          u_30 = t;
          t = term_y_72;
          o_30 = t;
          t = SSL_table_get(n_30, o_30);
          {
            ATerm w_92 = t;
            int x_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_38 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
                t = eval_config_0_0(t);
                b_38 = t;
                x_30 = t;
                t = term_n_72;
                v_30 = t;
                t = x_30;
                y_30 = t;
                t = term_y_72;
                w_30 = t;
                t = SSL_table_put(v_30, w_30, b_38);
                t = b_38;
                ;
                LocalPopChoice(x_92);
              }
            else
              {
                t = w_92;
              }
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
    t = term_y_92;
    f_31 = t;
    t = term_n_72;
    a_31 = t;
    t = f_31;
    g_31 = t;
    t = term_y_92;
    e_31 = t;
    t = SSL_table_get(a_31, e_31);
    {
      ATerm z_92 = t;
      int a_93 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_38 = NULL,h_31 = NULL,j_31 = NULL,m_31 = NULL,o_31 = NULL;
          t = eval_config_0_0(t);
          f_38 = t;
          m_31 = t;
          t = term_n_72;
          h_31 = t;
          t = m_31;
          o_31 = t;
          t = term_y_92;
          j_31 = t;
          t = SSL_table_put(h_31, j_31, f_38);
          t = f_38;
          ;
          LocalPopChoice(a_93);
        }
      else
        {
          t = z_92;
        }
      o_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_17), m_17), o_17), (ATerm) ATinsert(ATinsert(ATempty, l_17), term_b_93));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm t_66 (ATerm t)
{
  t = term_r_92;
  return(t);
}
ATerm u_66 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL;
  p_17 = t;
  {
    ATerm c_93 = t;
    int d_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
        t = term_v_72;
        r_31 = t;
        t = term_n_72;
        p_31 = t;
        t = r_31;
        s_31 = t;
        t = term_v_72;
        q_31 = t;
        t = SSL_table_get(p_31, q_31);
        {
          ATerm e_93 = t;
          int f_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_38 = NULL,u_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
              t = eval_config_0_0(t);
              j_38 = t;
              z_31 = t;
              t = term_n_72;
              u_31 = t;
              t = z_31;
              a_32 = t;
              t = term_v_72;
              y_31 = t;
              t = SSL_table_put(u_31, y_31, j_38);
              t = j_38;
              ;
              LocalPopChoice(f_93);
            }
          else
            {
              t = e_93;
            }
        }
        ;
        LocalPopChoice(d_93);
      }
    else
      {
        t = c_93;
        {
          ATerm b_32 = NULL,d_32 = NULL,g_32 = NULL,j_32 = NULL;
          t = term_y_72;
          g_32 = t;
          t = term_n_72;
          b_32 = t;
          t = g_32;
          j_32 = t;
          t = term_y_72;
          d_32 = t;
          t = SSL_table_get(b_32, d_32);
          {
            ATerm h_93 = t;
            int i_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_38 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,o_32 = NULL;
                t = eval_config_0_0(t);
                n_38 = t;
                m_32 = t;
                t = term_n_72;
                k_32 = t;
                t = m_32;
                o_32 = t;
                t = term_y_72;
                l_32 = t;
                t = SSL_table_put(k_32, l_32, n_38);
                t = n_38;
                ;
                LocalPopChoice(i_93);
              }
            else
              {
                t = h_93;
              }
          }
        }
      }
    q_17 = t;
    t = p_17;
    t = pass_verbose_0_0(t);
    s_17 = t;
    t = p_17;
    t = pass_keep_0_0(t);
    u_17 = t;
    t = term_y_92;
    r_32 = t;
    t = term_n_72;
    p_32 = t;
    t = r_32;
    t_32 = t;
    t = term_y_92;
    q_32 = t;
    t = SSL_table_get(p_32, q_32);
    {
      ATerm j_93 = t;
      int k_93 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_38 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
          t = eval_config_0_0(t);
          r_38 = t;
          z_32 = t;
          t = term_n_72;
          x_32 = t;
          t = z_32;
          a_33 = t;
          t = term_y_92;
          y_32 = t;
          t = SSL_table_put(x_32, y_32, r_38);
          t = r_38;
          ;
          LocalPopChoice(k_93);
        }
      else
        {
          t = j_93;
        }
      v_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_17), s_17), v_17), (ATerm) ATinsert(ATinsert(ATempty, q_17), term_b_93));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm l_93 = t;
    int m_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_93 = t;
        int o_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(o_93);
          }
        else
          {
            t = n_93;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(m_93);
        t = xtc_transform_file_2_0(r_66, s_66, t);
      }
    else
      {
        t = l_93;
        t = xtc_transform_term_2_0(t_66, u_66, t);
      }
  }
  return(t);
}
ATerm v_66 (ATerm t)
{
  ATerm s_38 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,f_33 = NULL;
  s_38 = t;
  t = term_p_93;
  d_33 = t;
  t = term_r_72;
  b_33 = t;
  t = d_33;
  f_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_38), term_p_93);
  c_33 = t;
  t = SSL_printnl(b_33, c_33);
  t = s_38;
  return(t);
}
ATerm w_66 (ATerm t)
{
  t = if_verbose1_1_0(y_66, t);
  return(t);
}
ATerm x_66 (ATerm t)
{
  t = parse_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  {
    ATerm q_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_93 = t;
        int v_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(v_93);
          }
        else
          {
            t = u_93;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(s_93);
        t = xtc_transform_file_2_0(z_66, a_67, t);
      }
    else
      {
        t = q_93;
        t = xtc_transform_term_2_0(b_67, c_67, t);
      }
    t = frontend_0_0(t);
    t = output_frontend_0_0(t);
    t = extract_0_0(t);
    t = warnings_0_0(t);
    {
      ATerm w_93 = t;
      int y_93 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_93 = t;
          int a_94 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(a_94);
            }
          else
            {
              t = z_93;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(y_93);
          t = xtc_transform_file_2_0(d_67, e_67, t);
        }
      else
        {
          t = w_93;
          t = xtc_transform_term_2_0(f_67, i_67, t);
        }
      t = rename_defs_0_0(t);
    }
  }
  return(t);
}
ATerm y_66 (ATerm t)
{
  ATerm w_17 = NULL,g_33 = NULL,h_33 = NULL,k_33 = NULL,l_33 = NULL;
  w_17 = t;
  k_33 = t;
  t = term_r_72;
  g_33 = t;
  t = k_33;
  l_33 = t;
  t = (ATerm) ATinsert(CheckATermList(w_17), term_b_94);
  h_33 = t;
  t = SSL_printnl(g_33, h_33);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(CheckATermList(w_17), term_b_94));
  return(t);
}
ATerm z_66 (ATerm t)
{
  t = term_c_94;
  return(t);
}
ATerm a_67 (ATerm t)
{
  ATerm x_17 = NULL;
  t = pass_verbose_0_0(t);
  x_17 = t;
  t = (ATerm) ATinsert(ATempty, x_17);
  t = concat_0_0(t);
  return(t);
}
ATerm b_67 (ATerm t)
{
  t = term_c_94;
  return(t);
}
ATerm c_67 (ATerm t)
{
  ATerm y_17 = NULL;
  t = pass_verbose_0_0(t);
  y_17 = t;
  t = (ATerm) ATinsert(ATempty, y_17);
  t = concat_0_0(t);
  return(t);
}
ATerm d_67 (ATerm t)
{
  t = term_d_94;
  return(t);
}
ATerm e_67 (ATerm t)
{
  ATerm z_17 = NULL;
  t = pass_verbose_0_0(t);
  z_17 = t;
  t = (ATerm) ATinsert(CheckATermList(z_17), term_k_74);
  return(t);
}
ATerm f_67 (ATerm t)
{
  t = term_d_94;
  return(t);
}
ATerm i_67 (ATerm t)
{
  ATerm a_18 = NULL;
  t = pass_verbose_0_0(t);
  a_18 = t;
  t = (ATerm) ATinsert(CheckATermList(a_18), term_k_74);
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_66, t);
  t = profile_p__2_0(w_66, x_66, t);
  return(t);
}
ATerm j_67 (ATerm t)
{
  ATerm e_94 = t;
  int f_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_94);
    }
  else
    {
      t = e_94;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_94 = t;
  int h_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL;
      i_18 = t;
      t = SSL_is_string(i_18);
      ;
      LocalPopChoice(h_94);
    }
  else
    {
      t = g_94;
      {
        ATerm i_94 = t;
        int j_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_67, t);
            ;
            LocalPopChoice(j_94);
          }
        else
          {
            t = i_94;
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
                        ATerm k_94 = t;
                        int l_94 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_33 = NULL,o_33 = NULL;
                            o_33 = t;
                            t = term_n_72;
                            m_33 = t;
                            t = SSL_table_get(m_33, n_18);
                            {
                              ATerm m_94 = t;
                              int n_94 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_39 = NULL,p_33 = NULL,r_33 = NULL;
                                  t = eval_config_0_0(t);
                                  n_39 = t;
                                  r_33 = t;
                                  t = term_n_72;
                                  p_33 = t;
                                  t = SSL_table_put(p_33, n_18, n_39);
                                  t = n_39;
                                  ;
                                  LocalPopChoice(n_94);
                                }
                              else
                                {
                                  t = m_94;
                                }
                            }
                            ;
                            LocalPopChoice(l_94);
                          }
                        else
                          {
                            t = k_94;
                            {
                              ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
                              t = term_o_94;
                              u_33 = t;
                              t = term_r_72;
                              s_33 = t;
                              t = u_33;
                              v_33 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, n_18), term_o_94);
                              t_33 = t;
                              t = SSL_printnl(s_33, t_33);
                              t = n_18;
                              _fail(t);
                            }
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
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  {
    ATerm p_94 = t;
    int q_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_94 = ATgetArgument(t, 0);
            ATerm s_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_19, f_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_94 = ATgetFirst((ATermList) t);
            s_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_39;
        ;
        LocalPopChoice(q_94);
      }
    else
      {
        t = p_94;
        t = (ATerm) ATempty;
      }
    g_19 = t;
    t = SSL_table_put(e_19, f_19, g_19);
    t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,a_34 = NULL,c_34 = NULL;
  o_19 = t;
  t = a_104(t);
  p_19 = t;
  {
    ATerm u_94 = t;
    int v_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_33 = NULL,z_33 = NULL;
        z_33 = t;
        t = term_x_89;
        w_33 = t;
        t = SSL_table_get(p_19, w_33);
        ;
        LocalPopChoice(v_94);
      }
    else
      {
        t = u_94;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_19 = ATgetFirst((ATermList) t);
        q_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    c_34 = t;
    t = term_x_89;
    a_34 = t;
    t = SSL_table_put(p_19, a_34, q_19);
    t = r_19;
    {
      ATerm k_67 (ATerm t)
      {
        ATerm s_19 = NULL;
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_19, s_19);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(k_67, t);
      t = o_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  ATerm w_94 = t;
  int x_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_86(t);
      t = l_86(t);
      ;
      LocalPopChoice(x_94);
    }
  else
    {
      t = w_94;
      t = l_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,r_34 = NULL;
  v_19 = t;
  t = z_103(t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_19, term_x_89);
  {
    ATerm y_94 = t;
    int z_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_34 = NULL,k_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_95 = ATgetArgument(t, 0);
            ATerm b_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        k_34 = t;
        t = term_x_89;
        e_34 = t;
        t = SSL_table_get(w_19, e_34);
        ;
        LocalPopChoice(z_94);
      }
    else
      {
        t = y_94;
        t = (ATerm) ATempty;
      }
    x_19 = t;
    n_34 = t;
    t = term_x_89;
    l_34 = t;
    t = n_34;
    r_34 = t;
    t = (ATerm) ATinsert(CheckATermList(x_19), (ATerm) ATempty);
    m_34 = t;
    t = SSL_table_put(w_19, l_34, m_34);
    t = v_19;
  }
  return(t);
}
ATerm l_67 (ATerm t)
{
  t = term_j_90;
  return(t);
}
ATerm n_67 (ATerm t)
{
  ATerm c_95 = t;
  int d_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 = NULL;
      j_20 = t;
      t = SSL_remove(j_20);
      ;
      LocalPopChoice(d_95);
    }
  else
    {
      t = c_95;
    }
  return(t);
}
ATerm o_67 (ATerm t)
{
  t = term_j_90;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  t = begin_scope_1_0(l_67, t);
  {
    ATerm m_67 (ATerm t)
    {
      ATerm e_20 = NULL;
      e_20 = t;
      {
        ATerm e_95 = t;
        int f_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
            w_34 = t;
            t = term_j_90;
            u_34 = t;
            t = w_34;
            x_34 = t;
            t = term_x_89;
            v_34 = t;
            t = SSL_table_get(u_34, v_34);
            ;
            LocalPopChoice(f_95);
          }
        else
          {
            t = e_95;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_20 != NULL) && (d_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_20 = ATgetFirst((ATermList) t);
            {
              ATerm g_95 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(d_20);
        t = map_1_0(n_67, t);
        t = e_20;
        t = end_scope_1_0(o_67, t);
      }
      return(t);
    }
    t = restore_always_2_0(a_115, m_67, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm h_95 = t;
  int i_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20 = NULL,p_20 = NULL,e_35 = NULL,f_35 = NULL,o_35 = NULL,a_36 = NULL;
      m_20 = t;
      t = term_m_72;
      o_35 = t;
      t = term_n_72;
      e_35 = t;
      t = o_35;
      a_36 = t;
      t = term_m_72;
      f_35 = t;
      t = SSL_table_get(e_35, f_35);
      {
        ATerm j_95 = t;
        int k_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_39 = NULL,f_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
            t = eval_config_0_0(t);
            z_39 = t;
            j_36 = t;
            t = term_n_72;
            f_36 = t;
            t = j_36;
            k_36 = t;
            t = term_m_72;
            i_36 = t;
            t = SSL_table_put(f_36, i_36, z_39);
            t = z_39;
            ;
            LocalPopChoice(k_95);
          }
        else
          {
            t = j_95;
          }
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_20, term_l_75);
        t = geq_0_0(t);
        t = m_20;
        t = g_107(t);
      }
      ;
      LocalPopChoice(i_95);
    }
  else
    {
      t = h_95;
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_95 = ATgetArgument(t, 0);
      if(match_cons(l_95, sym__4))
        {
          q_20 = ATgetArgument(l_95, 0);
          r_20 = ATgetArgument(l_95, 1);
          s_20 = ATgetArgument(l_95, 2);
          t_20 = ATgetArgument(l_95, 3);
        }
      else
        _fail(t);
      {
        ATerm m_95 = ATgetArgument(t, 1);
        if(match_cons(m_95, sym__4))
          {
            u_20 = ATgetArgument(m_95, 0);
            v_20 = ATgetArgument(m_95, 1);
            w_20 = ATgetArgument(m_95, 2);
            x_20 = ATgetArgument(m_95, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_20, u_20);
  {
    ATerm n_95 = t;
    int o_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(q_20, u_20);
        ;
        LocalPopChoice(o_95);
      }
    else
      {
        t = n_95;
        t = SSL_subtr(q_20, u_20);
      }
    y_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_20, v_20);
    {
      ATerm p_95 = t;
      int q_95 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(r_20, v_20);
          ;
          LocalPopChoice(q_95);
        }
      else
        {
          t = p_95;
          t = SSL_subtr(r_20, v_20);
        }
      z_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_20, w_20);
      {
        ATerm r_95 = t;
        int s_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(s_20, w_20);
            ;
            LocalPopChoice(s_95);
          }
        else
          {
            t = r_95;
            t = SSL_subtr(s_20, w_20);
          }
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_20, x_20);
        {
          ATerm t_95 = t;
          int u_95 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(t_20, x_20);
              ;
              LocalPopChoice(u_95);
            }
          else
            {
              t = t_95;
              t = SSL_subtr(t_20, x_20);
            }
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym__4, y_20, z_20, a_21, c_21);
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
        ATerm v_95 = ATgetArgument(t, 1);
      }
      k_21 = ATgetArgument(t, 2);
      {
        ATerm w_95 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
  {
    ATerm x_95 = t;
    int y_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_21, k_21);
        ;
        LocalPopChoice(y_95);
      }
    else
      {
        t = x_95;
        t = SSL_addr(j_21, k_21);
      }
    l_21 = t;
    t = SSL_TicksToSeconds(l_21);
    m_21 = t;
    t = i_21;
    if(match_cons(t, sym__4))
      {
        ATerm z_95 = ATgetArgument(t, 0);
        n_21 = ATgetArgument(t, 1);
        {
          ATerm a_96 = ATgetArgument(t, 2);
        }
        o_21 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
    {
      ATerm b_96 = t;
      int c_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(n_21, o_21);
          ;
          LocalPopChoice(c_96);
        }
      else
        {
          t = b_96;
          t = SSL_addr(n_21, o_21);
        }
      p_21 = t;
      t = SSL_TicksToSeconds(p_21);
      q_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_21), term_e_96), m_21), term_d_96);
      t = t_110(t);
      t = g_21;
    }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,l_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  t_21 = t;
  t = term_f_96;
  p_36 = t;
  t = term_n_72;
  l_36 = t;
  t = p_36;
  q_36 = t;
  t = term_f_96;
  o_36 = t;
  t = SSL_table_get(l_36, o_36);
  {
    ATerm g_96 = t;
    int h_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,r_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL;
        t = eval_config_0_0(t);
        d_40 = t;
        u_36 = t;
        t = term_n_72;
        r_36 = t;
        t = u_36;
        v_36 = t;
        t = term_f_96;
        s_36 = t;
        t = SSL_table_put(r_36, s_36, d_40);
        t = d_40;
        ;
        LocalPopChoice(h_96);
      }
    else
      {
        t = g_96;
      }
    u_21 = t;
    z_36 = t;
    t = term_a_74;
    x_36 = t;
    t = z_36;
    a_37 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_96), term_o_96), term_n_96), term_m_96), term_l_96), term_k_96), term_j_96), u_21), term_i_96);
    y_36 = t;
    t = SSL_printnl(x_36, y_36);
    t = t_21;
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm q_96 = t;
  int r_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,a_22 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,g_37 = NULL;
      y_21 = t;
      t = term_m_72;
      e_37 = t;
      t = term_n_72;
      c_37 = t;
      t = e_37;
      g_37 = t;
      t = term_m_72;
      d_37 = t;
      t = SSL_table_get(c_37, d_37);
      {
        ATerm s_96 = t;
        int t_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = NULL,h_37 = NULL,i_37 = NULL,l_37 = NULL,m_37 = NULL;
            t = eval_config_0_0(t);
            h_40 = t;
            l_37 = t;
            t = term_n_72;
            h_37 = t;
            t = l_37;
            m_37 = t;
            t = term_m_72;
            i_37 = t;
            t = SSL_table_put(h_37, i_37, h_40);
            t = h_40;
            ;
            LocalPopChoice(t_96);
          }
        else
          {
            t = s_96;
          }
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_b_77);
        t = geq_0_0(t);
        t = y_21;
        t = k_107(t);
      }
      ;
      LocalPopChoice(r_96);
    }
  else
    {
      t = q_96;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm u_96 = t;
  int v_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,n_22 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL;
      k_22 = t;
      t = term_m_72;
      p_37 = t;
      t = term_n_72;
      n_37 = t;
      t = p_37;
      s_37 = t;
      t = term_m_72;
      o_37 = t;
      t = SSL_table_get(n_37, o_37);
      {
        ATerm w_96 = t;
        int x_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_40 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
            t = eval_config_0_0(t);
            l_40 = t;
            v_37 = t;
            t = term_n_72;
            t_37 = t;
            t = v_37;
            w_37 = t;
            t = term_m_72;
            u_37 = t;
            t = SSL_table_put(t_37, u_37, l_40);
            t = l_40;
            ;
            LocalPopChoice(x_96);
          }
        else
          {
            t = w_96;
          }
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, term_g_77);
        t = geq_0_0(t);
        t = k_22;
        t = j_107(t);
      }
      ;
      LocalPopChoice(v_96);
    }
  else
    {
      t = u_96;
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
    ATerm y_96 = t;
    int z_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_22;
        if((x_22 != t))
          {
            _fail(t);
          }
        t = w_22;
        ;
        LocalPopChoice(z_96);
      }
    else
      {
        t = y_96;
        t = w_22;
        {
          ATerm a_97 = t;
          int b_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_22, y_22);
              ;
              LocalPopChoice(b_97);
            }
          else
            {
              t = a_97;
              t = SSL_gtr(x_22, y_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm c_97 = t;
  int d_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL,d_23 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,c_38 = NULL;
      b_23 = t;
      t = term_m_72;
      a_38 = t;
      t = term_n_72;
      y_37 = t;
      t = a_38;
      c_38 = t;
      t = term_m_72;
      z_37 = t;
      t = SSL_table_get(y_37, z_37);
      {
        ATerm e_97 = t;
        int f_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL;
            t = eval_config_0_0(t);
            y_40 = t;
            g_38 = t;
            t = term_n_72;
            d_38 = t;
            t = g_38;
            h_38 = t;
            t = term_m_72;
            e_38 = t;
            t = SSL_table_put(d_38, e_38, y_40);
            t = y_40;
            ;
            LocalPopChoice(f_97);
          }
        else
          {
            t = e_97;
          }
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_23, term_q_82);
        t = geq_0_0(t);
        t = b_23;
        t = l_107(t);
      }
      ;
      LocalPopChoice(d_97);
    }
  else
    {
      t = c_97;
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
      ATerm g_97 = t;
      int h_97 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_23;
          ;
          LocalPopChoice(h_97);
        }
      else
        {
          t = g_97;
          {
            ATerm i_97 = t;
            int j_97 = stack_ptr;
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
                  ATerm p_67 (ATerm t)
                  {
                    ATerm b_41 = NULL;
                    b_41 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_40, b_41);
                    t = l_97(t);
                    return(t);
                  }
                  t = fetch_1_0(p_67, t);
                  t = a_41;
                  t = k_23(t);
                }
                ;
                LocalPopChoice(j_97);
              }
            else
              {
                t = i_97;
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
ATerm q_67 (ATerm t)
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
    ATerm k_97 = t;
    int m_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_97 = ATgetArgument(t, 0);
            ATerm o_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_23, o_23);
        ;
        LocalPopChoice(m_97);
      }
    else
      {
        t = k_97;
        t = (ATerm) ATempty;
      }
    q_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_23, p_23);
    t = union_1_0(q_67, t);
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
    ATerm r_67 (ATerm t)
    {
      ATerm z_23 = NULL,a_24 = NULL;
      if(match_cons(t, sym__2))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_23, z_23, a_24);
      t = c_112(t);
      return(t);
    }
    t = map_1_0(r_67, t);
  }
  return(t);
}
ATerm r_24 (ATerm k_24, ATerm t)
{
  t = SSL_fclose(k_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_24 = ATgetArgument(t, 0);
      {
        ATerm p_97 = t;
        int q_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_24);
            ;
            LocalPopChoice(q_97);
          }
        else
          {
            t = p_97;
            t = r_24(p_24, t);
          }
      }
    }
  else
    {
      t = r_24(p_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_24 = NULL;
  t = SSL_stdin_stream();
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t = SSL_stdout_stream();
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_24 = NULL;
  t = SSL_stderr_stream();
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_24);
  return(t);
}
ATerm s_67 (ATerm t)
{
  ATerm e_25 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_25;
  return(t);
}
ATerm t_67 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_is_string(k_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_97 = ATgetArgument(t, 0);
      ATerm s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_97 = t;
    int u_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_41 = NULL,n_41 = NULL;
        m_41 = t;
        t = SSL_explode_term(m_41);
        if(match_cons(t, sym__2))
          {
            ATerm v_97 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_97) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_97 = ATgetArgument(t, 1);
              if(((ATgetType(w_97) == AT_LIST) && !(ATisEmpty(w_97))))
                {
                  n_41 = ATgetFirst((ATermList) w_97);
                  {
                    ATerm x_97 = (ATerm) ATgetNext((ATermList) w_97);
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
        LocalPopChoice(u_97);
      }
    else
      {
        t = t_97;
        {
          ATerm y_97 = t;
          int z_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
              t = _2_0(s_67, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_25 = ATgetArgument(t, 0);
                  c_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_25, c_25);
              d_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_25);
              ;
              LocalPopChoice(z_97);
            }
          else
            {
              t = y_97;
              {
                ATerm f_25 = NULL,g_25 = NULL,i_25 = NULL;
                t = _2_0(t_67, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_25 = ATgetArgument(t, 0);
                    g_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_25, g_25);
                i_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  ATerm a_98 = t;
  int b_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL;
      o_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_25, term_c_98);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_98);
    }
  else
    {
      t = a_98;
      {
        ATerm o_41 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
        o_41 = t;
        t = term_d_98;
        l_38 = t;
        t = term_r_72;
        i_38 = t;
        t = l_38;
        m_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, o_41), term_d_98);
        k_38 = t;
        t = SSL_printnl(i_38, k_38);
        t = o_41;
        _fail(t);
      }
    }
  l_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_25);
  m_25 = t;
  t = l_25;
  t = fclose_0_0(t);
  t = m_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_98 = t;
  int f_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL,o_38 = NULL,p_38 = NULL;
      q_25 = t;
      p_38 = t;
      t = (ATerm) ATinsert(ATempty, term_g_98);
      o_38 = t;
      t = SSL_access(q_25, o_38);
      LocalPopChoice(f_98);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_98;
      {
        ATerm h_98 = t;
        int i_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_41 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
            ATerm j_98 = t;
            if((PushChoice() == 0))
              {
                ATerm s_25 = NULL,q_38 = NULL,t_38 = NULL;
                s_25 = t;
                t_38 = t;
                t = (ATerm) ATinsert(ATempty, term_i_90);
                q_38 = t;
                t = SSL_access(s_25, q_38);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_98;
              }
            r_41 = t;
            t = term_k_98;
            w_38 = t;
            t = term_r_72;
            u_38 = t;
            t = w_38;
            x_38 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, r_41), term_k_98);
            v_38 = t;
            t = SSL_printnl(u_38, v_38);
            t = r_41;
            ;
            LocalPopChoice(i_98);
          }
        else
          {
            t = h_98;
            {
              ATerm u_41 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
              u_41 = t;
              t = term_l_98;
              a_39 = t;
              t = term_r_72;
              y_38 = t;
              t = a_39;
              b_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_41), term_l_98);
              z_38 = t;
              t = SSL_printnl(y_38, z_38);
              t = u_41;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_67 (ATerm t)
{
  ATerm x_41 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  x_41 = t;
  t = term_m_98;
  e_39 = t;
  t = term_r_72;
  c_39 = t;
  t = e_39;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_41), term_m_98);
  d_39 = t;
  t = SSL_printnl(c_39, d_39);
  t = x_41;
  return(t);
}
ATerm v_67 (ATerm t)
{
  ATerm a_42 = NULL,r_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  a_42 = t;
  t = term_n_98;
  u_39 = t;
  t = term_r_72;
  r_39 = t;
  t = u_39;
  v_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_42), term_n_98);
  t_39 = t;
  t = SSL_printnl(r_39, t_39);
  t = a_42;
  return(t);
}
ATerm w_67 (ATerm t)
{
  ATerm x_25 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,a_40 = NULL;
  x_25 = t;
  y_39 = t;
  t = term_r_72;
  w_39 = t;
  t = y_39;
  a_40 = t;
  t = (ATerm) ATinsert(ATempty, term_o_98);
  x_39 = t;
  t = SSL_printnl(w_39, x_39);
  t = x_25;
  return(t);
}
ATerm x_67 (ATerm t)
{
  ATerm y_25 = NULL,b_40 = NULL,c_40 = NULL,e_40 = NULL,f_40 = NULL;
  y_25 = t;
  e_40 = t;
  t = term_r_72;
  b_40 = t;
  t = e_40;
  f_40 = t;
  t = (ATerm) ATinsert(ATempty, term_p_98);
  c_40 = t;
  t = SSL_printnl(b_40, c_40);
  t = y_25;
  return(t);
}
ATerm y_67 (ATerm t)
{
  ATerm z_25 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  z_25 = t;
  q_40 = t;
  t = term_r_72;
  o_40 = t;
  t = q_40;
  r_40 = t;
  t = (ATerm) ATinsert(ATempty, term_o_98);
  p_40 = t;
  t = SSL_printnl(o_40, p_40);
  t = z_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,m_40 = NULL,n_40 = NULL;
  u_25 = t;
  t = if_verbose5_1_0(u_67, t);
  {
    ATerm q_98 = t;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
        i_39 = t;
        t = term_r_98;
        g_39 = t;
        t = i_39;
        j_39 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_25);
        h_39 = t;
        t = SSL_table_get(g_39, h_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_98;
      }
    v_25 = t;
    o_39 = t;
    t = term_r_98;
    k_39 = t;
    t = o_39;
    p_39 = t;
    t = term_s_98;
    l_39 = t;
    t = p_39;
    q_39 = t;
    t = (ATerm) ATinsert(ATempty, u_25);
    m_39 = t;
    t = SSL_table_put(k_39, l_39, m_39);
    t = v_25;
    t = if_verbose4_1_0(v_67, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(w_67, t);
    w_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_98, w_25);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(x_67, t);
    k_40 = t;
    t = term_r_98;
    g_40 = t;
    t = k_40;
    m_40 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_25);
    i_40 = t;
    t = m_40;
    n_40 = t;
    t = (ATerm) ATempty;
    j_40 = t;
    t = SSL_table_put(g_40, i_40, j_40);
    t = (ATerm) ATmakeAppl(sym__3, term_r_98, (ATerm)ATmakeAppl(sym_Imported_1, u_25), (ATerm) ATempty);
    t = if_verbose4_1_0(y_67, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm t_98 = t;
  int u_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_98);
    }
  else
    {
      t = t_98;
      {
        ATerm v_98 = t;
        int w_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_67 (ATerm t)
            {
              t = filter_1_0(l_100, t);
              return(t);
            }
            t = Cons_2_0(l_100, z_67, t);
            ;
            LocalPopChoice(w_98);
          }
        else
          {
            t = v_98;
            {
              ATerm e_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_98 = ATgetFirst((ATermList) t);
                  e_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_26;
              t = filter_1_0(l_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm h_26 (ATerm t)
  {
    ATerm y_98 = t;
    int z_98 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_86(t);
        t = h_26(t);
        ;
        LocalPopChoice(z_98);
      }
    else
      {
        t = y_98;
      }
    return(t);
  }
  t = h_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_99 = t;
  int b_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
      t = term_c_99;
      u_40 = t;
      t = term_n_72;
      s_40 = t;
      t = u_40;
      v_40 = t;
      t = term_c_99;
      t_40 = t;
      t = SSL_table_get(s_40, t_40);
      {
        ATerm d_99 = t;
        int e_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_42 = NULL,w_40 = NULL,x_40 = NULL,c_41 = NULL,d_41 = NULL;
            t = eval_config_0_0(t);
            g_42 = t;
            c_41 = t;
            t = term_n_72;
            w_40 = t;
            t = c_41;
            d_41 = t;
            t = term_c_99;
            x_40 = t;
            t = SSL_table_put(w_40, x_40, g_42);
            t = g_42;
            ;
            LocalPopChoice(e_99);
          }
        else
          {
            t = d_99;
          }
      }
      ;
      LocalPopChoice(b_99);
    }
  else
    {
      t = a_99;
      {
        ATerm f_99 = t;
        int g_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_41 = NULL,f_41 = NULL;
            f_41 = t;
            t = term_h_99;
            e_41 = t;
            t = SSL_getenv(e_41);
            ;
            LocalPopChoice(g_99);
          }
        else
          {
            t = f_99;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm a_68 (ATerm t)
{
  ATerm h_42 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_42 = t;
  t = term_k_99;
  i_41 = t;
  t = term_r_72;
  g_41 = t;
  t = i_41;
  j_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_42), term_k_99);
  h_41 = t;
  t = SSL_printnl(g_41, h_41);
  t = h_42;
  return(t);
}
ATerm b_68 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL;
  v_41 = t;
  t = term_r_98;
  s_41 = t;
  t = v_41;
  w_41 = t;
  t = term_l_99;
  t_41 = t;
  t = SSL_table_get(s_41, t_41);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_99 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_99;
      }
  }
  return(t);
}
ATerm c_68 (ATerm t)
{
  ATerm k_42 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL;
  k_42 = t;
  t = term_n_99;
  b_42 = t;
  t = term_r_72;
  y_41 = t;
  t = b_42;
  c_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_42), term_n_99);
  z_41 = t;
  t = SSL_printnl(y_41, z_41);
  t = k_42;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_26 = NULL;
  t = if_verbose5_1_0(a_68, t);
  i_26 = t;
  {
    ATerm o_99 = t;
    int p_99 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL,p_41 = NULL,q_41 = NULL;
        p_41 = t;
        t = term_r_98;
        k_41 = t;
        t = p_41;
        q_41 = t;
        t = term_s_98;
        l_41 = t;
        t = SSL_table_get(k_41, l_41);
        ;
        LocalPopChoice(p_99);
      }
    else
      {
        t = o_99;
        {
          ATerm j_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_26 = t;
          t = repeat_1_0(b_68, t);
          t = j_26;
        }
      }
    t = i_26;
    t = if_verbose5_1_0(c_68, t);
  }
  return(t);
}
ATerm d_68 (ATerm t)
{
  ATerm n_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL;
  n_42 = t;
  t = term_q_99;
  f_42 = t;
  t = term_r_72;
  d_42 = t;
  t = f_42;
  i_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_42), term_q_99);
  e_42 = t;
  t = SSL_printnl(d_42, e_42);
  t = n_42;
  return(t);
}
ATerm f_68 (ATerm t)
{
  ATerm a_43 = NULL,w_42 = NULL,x_42 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  t = term_q_99;
  b_43 = t;
  t = term_r_72;
  w_42 = t;
  t = b_43;
  c_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_43), term_q_99);
  x_42 = t;
  t = SSL_printnl(w_42, x_42);
  t = a_43;
  return(t);
}
ATerm g_68 (ATerm t)
{
  ATerm v_43 = NULL,h_43 = NULL,i_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  t = term_r_98;
  i_43 = t;
  t = term_r_98;
  h_43 = t;
  t = SSL_table_keys(h_43);
  t = map_1_0(h_68, t);
  v_43 = t;
  t = term_r_99;
  n_43 = t;
  t = term_r_72;
  l_43 = t;
  t = n_43;
  o_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_43), term_r_99);
  m_43 = t;
  t = SSL_printnl(l_43, m_43);
  t = v_43;
  return(t);
}
ATerm h_68 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,j_43 = NULL,k_43 = NULL;
  t_43 = t;
  k_43 = t;
  t = term_r_98;
  j_43 = t;
  t = SSL_table_get(j_43, t_43);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_99 = t;
  int t_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(d_68, t);
      t = xtc_load_0_0(t);
      {
        ATerm u_99 = t;
        int v_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL,o_42 = NULL;
            if(match_cons(t, sym__2))
              {
                t_42 = ATgetArgument(t, 0);
                u_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            m_42 = t;
            t = term_r_98;
            j_42 = t;
            t = m_42;
            o_42 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, t_42);
            l_42 = t;
            t = SSL_table_get(j_42, l_42);
            {
              ATerm e_68 (ATerm t)
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
              t = fetch_1_0(e_68, t);
              t = not_null(v_42);
            }
            ;
            LocalPopChoice(v_99);
          }
        else
          {
            t = u_99;
            {
              ATerm y_42 = NULL,z_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
              y_42 = t;
              r_42 = t;
              t = term_r_98;
              p_42 = t;
              t = r_42;
              s_42 = t;
              t = (ATerm) ATmakeAppl(sym_Tool_1, y_42);
              q_42 = t;
              t = SSL_table_get(p_42, q_42);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_99 = ATgetFirst((ATermList) t);
                  if(match_cons(w_99, sym__2))
                    {
                      ATerm y_99 = ATgetArgument(w_99, 0);
                      z_42 = ATgetArgument(w_99, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_99 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_42;
            }
          }
        t = if_verbose5_1_0(f_68, t);
      }
      ;
      LocalPopChoice(t_99);
    }
  else
    {
      t = s_99;
      {
        ATerm o_26 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
        o_26 = t;
        f_43 = t;
        t = term_r_72;
        d_43 = t;
        t = f_43;
        g_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_100), o_26), term_z_99);
        e_43 = t;
        t = SSL_printnl(d_43, e_43);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_100), o_26), term_z_99);
        t = if_verbose5_1_0(g_68, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_26;
  {
    ATerm b_100 = t;
    int c_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL,q_43 = NULL;
        q_43 = t;
        t = term_n_72;
        p_43 = t;
        t = SSL_table_get(p_43, s_26);
        {
          ATerm d_100 = t;
          int e_100 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL,r_43 = NULL,s_43 = NULL;
              t = eval_config_0_0(t);
              b_44 = t;
              s_43 = t;
              t = term_n_72;
              r_43 = t;
              t = SSL_table_put(r_43, s_26, b_44);
              t = b_44;
              ;
              LocalPopChoice(e_100);
            }
          else
            {
              t = d_100;
            }
        }
        ;
        LocalPopChoice(c_100);
      }
    else
      {
        t = b_100;
        t = (ATerm) ATempty;
      }
    u_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
    {
      ATerm f_100 = t;
      int g_100 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_100 = ATgetArgument(t, 0);
              ATerm i_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_26;
          {
            ATerm i_68 (ATerm t)
            {
              t = u_26;
              return(t);
            }
            t = at_end_1_0(i_68, t);
          }
          ;
          LocalPopChoice(g_100);
        }
      else
        {
          t = f_100;
          {
            ATerm f_44 = NULL,w_43 = NULL,x_43 = NULL;
            x_43 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
            w_43 = t;
            t = SSL_explode_term(w_43);
            if(match_cons(t, sym__2))
              {
                ATerm j_100 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_100) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                f_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_44;
            t = concat_0_0(t);
          }
        }
      v_26 = t;
      z_43 = t;
      t = term_n_72;
      y_43 = t;
      t = SSL_table_put(y_43, s_26, v_26);
      t = (ATerm) ATmakeAppl(sym__3, term_n_72, s_26, v_26);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_27 = NULL;
      t = term_s_89;
      t = l_0(t);
      j_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_100, term_m_100, j_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_27 = ATgetFirst((ATermList) t);
          f_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_27 = ATgetFirst((ATermList) t);
          h_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_27;
      t = j_0(t);
      t = g_27;
      t = k_0(t);
      o_27 = t;
      t = (ATerm) ATinsert(CheckATermList(h_27), o_27);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_100 = t;
    int o_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_44 = NULL,c_44 = NULL,g_44 = NULL,h_44 = NULL;
        t = p_27;
        c_44 = t;
        t = term_n_72;
        a_44 = t;
        t = SSL_table_get(a_44, p_27);
        {
          ATerm p_100 = t;
          int q_100 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_44 = NULL,d_44 = NULL,e_44 = NULL;
              t = eval_config_0_0(t);
              j_44 = t;
              e_44 = t;
              t = term_n_72;
              d_44 = t;
              t = SSL_table_put(d_44, p_27, j_44);
              t = j_44;
              ;
              LocalPopChoice(q_100);
            }
          else
            {
              t = p_100;
            }
          h_44 = t;
          t = term_n_72;
          g_44 = t;
          t = SSL_table_remove(g_44, p_27);
          t = (ATerm) ATmakeAppl(sym__2, term_n_72, p_27);
        }
        ;
        LocalPopChoice(o_100);
      }
    else
      {
        t = n_100;
        {
          ATerm i_44 = NULL,k_44 = NULL;
          k_44 = t;
          t = term_n_72;
          i_44 = t;
          t = SSL_table_put(i_44, p_27, q_27);
          t = (ATerm) ATmakeAppl(sym__3, term_n_72, p_27, q_27);
        }
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm s_27 = NULL,u_27 = NULL,w_27 = NULL,x_27 = NULL,t_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  {
    ATerm r_100 = t;
    int s_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL,m_44 = NULL;
        m_44 = t;
        t = term_n_72;
        l_44 = t;
        t = SSL_table_get(l_44, s_27);
        {
          ATerm t_100 = t;
          int u_100 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
              t = eval_config_0_0(t);
              n_44 = t;
              p_44 = t;
              t = term_n_72;
              o_44 = t;
              t = SSL_table_put(o_44, s_27, n_44);
              t = n_44;
              ;
              LocalPopChoice(u_100);
            }
          else
            {
              t = t_100;
            }
        }
        ;
        LocalPopChoice(s_100);
      }
    else
      {
        t = r_100;
        t = (ATerm) ATempty;
      }
    w_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_27, u_27);
    {
      ATerm v_100 = t;
      int w_100 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_100 = ATgetArgument(t, 0);
              ATerm y_100 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_27;
          {
            ATerm j_68 (ATerm t)
            {
              t = u_27;
              return(t);
            }
            t = at_end_1_0(j_68, t);
          }
          ;
          LocalPopChoice(w_100);
        }
      else
        {
          t = v_100;
          {
            ATerm r_44 = NULL,q_44 = NULL,s_44 = NULL;
            s_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_27, u_27);
            q_44 = t;
            t = SSL_explode_term(q_44);
            if(match_cons(t, sym__2))
              {
                ATerm z_100 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_100) != ATmakeSymbol("", 0, ATtrue)))
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
      u_44 = t;
      t = term_n_72;
      t_44 = t;
      t = SSL_table_put(t_44, s_27, x_27);
      t = (ATerm) ATmakeAppl(sym__3, term_n_72, s_27, x_27);
    }
  }
  return(t);
}
ATerm k_68 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_68 (ATerm t)
{
  ATerm k_28 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,a_45 = NULL;
  k_28 = t;
  y_44 = t;
  t = term_n_72;
  w_44 = t;
  t = y_44;
  a_45 = t;
  t = term_g_87;
  x_44 = t;
  t = SSL_table_put(w_44, x_44, k_28);
  t = term_s_89;
  return(t);
}
ATerm m_68 (ATerm t)
{
  t = term_a_101;
  return(t);
}
ATerm n_68 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  if(match_string(t, "-o"))
    {
      t = l_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_28;
    }
  return(t);
}
ATerm o_68 (ATerm t)
{
  ATerm m_28 = NULL,b_45 = NULL,c_45 = NULL,e_45 = NULL,f_45 = NULL;
  m_28 = t;
  e_45 = t;
  t = term_n_72;
  b_45 = t;
  t = e_45;
  f_45 = t;
  t = term_v_72;
  c_45 = t;
  t = SSL_table_put(b_45, c_45, m_28);
  t = term_s_89;
  return(t);
}
ATerm p_68 (ATerm t)
{
  t = term_b_101;
  return(t);
}
ATerm q_68 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-I"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
ATerm r_68 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_92, (ATerm) ATinsert(ATinsert(ATempty, o_28), term_y_92));
  t = extend_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm s_68 (ATerm t)
{
  t = term_c_101;
  return(t);
}
ATerm t_68 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  if(match_string(t, "--main"))
    {
      t = p_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm u_68 (ATerm t)
{
  ATerm r_28 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  r_28 = t;
  i_45 = t;
  t = term_n_72;
  g_45 = t;
  t = i_45;
  j_45 = t;
  t = term_q_90;
  h_45 = t;
  t = SSL_table_put(g_45, h_45, r_28);
  t = term_s_89;
  return(t);
}
ATerm v_68 (ATerm t)
{
  t = term_d_101;
  return(t);
}
ATerm w_68 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_68 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_74, (ATerm) ATinsert(ATempty, t_28));
  t = post_extend_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm y_68 (ATerm t)
{
  t = term_e_101;
  return(t);
}
ATerm z_68 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_69 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_73, (ATerm) ATinsert(ATempty, u_28));
  t = extend_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm b_69 (ATerm t)
{
  t = term_f_101;
  return(t);
}
ATerm c_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_69 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_73, (ATerm) ATinsert(ATempty, v_28));
  t = extend_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm e_69 (ATerm t)
{
  t = term_g_101;
  return(t);
}
ATerm f_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_69 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  t = term_n_72;
  k_45 = t;
  t = n_45;
  o_45 = t;
  t = term_n_73;
  l_45 = t;
  t = o_45;
  p_45 = t;
  t = term_s_89;
  m_45 = t;
  t = SSL_table_put(k_45, l_45, m_45);
  t = term_s_89;
  return(t);
}
ATerm h_69 (ATerm t)
{
  t = term_h_101;
  return(t);
}
ATerm i_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_69 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t = term_n_72;
  q_45 = t;
  t = u_45;
  v_45 = t;
  t = term_q_91;
  r_45 = t;
  t = v_45;
  w_45 = t;
  t = term_s_89;
  t_45 = t;
  t = SSL_table_put(q_45, r_45, t_45);
  t = term_s_89;
  return(t);
}
ATerm k_69 (ATerm t)
{
  t = term_i_101;
  return(t);
}
ATerm l_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_69 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL,e_46 = NULL,f_46 = NULL;
  b_46 = t;
  t = term_n_72;
  x_45 = t;
  t = b_46;
  e_46 = t;
  t = term_i_88;
  y_45 = t;
  t = e_46;
  f_46 = t;
  t = term_s_89;
  a_46 = t;
  t = SSL_table_put(x_45, y_45, a_46);
  t = term_s_89;
  return(t);
}
ATerm n_69 (ATerm t)
{
  t = term_j_101;
  return(t);
}
ATerm o_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_69 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,g_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  w_28 = t;
  t = SSL_string_to_int(w_28);
  x_28 = t;
  j_46 = t;
  t = term_n_72;
  g_46 = t;
  t = j_46;
  k_46 = t;
  t = term_e_76;
  i_46 = t;
  t = SSL_table_put(g_46, i_46, x_28);
  t = term_s_89;
  return(t);
}
ATerm q_69 (ATerm t)
{
  t = term_k_101;
  return(t);
}
ATerm r_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_69 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,q_46 = NULL;
  y_28 = t;
  t = SSL_string_to_int(y_28);
  z_28 = t;
  o_46 = t;
  t = term_n_72;
  m_46 = t;
  t = o_46;
  q_46 = t;
  t = term_j_76;
  n_46 = t;
  t = SSL_table_put(m_46, n_46, z_28);
  t = term_s_89;
  return(t);
}
ATerm t_69 (ATerm t)
{
  t = term_l_101;
  return(t);
}
ATerm u_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_69 (ATerm t)
{
  t = term_m_101;
  t = toggle_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm w_69 (ATerm t)
{
  t = term_n_101;
  return(t);
}
ATerm x_69 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_69 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  t = term_n_72;
  r_46 = t;
  t = w_46;
  x_46 = t;
  t = term_o_101;
  s_46 = t;
  t = x_46;
  y_46 = t;
  t = term_s_89;
  v_46 = t;
  t = SSL_table_put(r_46, s_46, v_46);
  t = term_s_89;
  return(t);
}
ATerm z_69 (ATerm t)
{
  t = term_p_101;
  return(t);
}
ATerm a_70 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_70 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_101, (ATerm) ATinsert(ATempty, a_29));
  t = extend_config_0_0(t);
  t = term_s_89;
  return(t);
}
ATerm c_70 (ATerm t)
{
  t = term_r_101;
  return(t);
}
ATerm d_70 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_70 (ATerm t)
{
  ATerm b_29 = NULL,d_29 = NULL,z_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_29 = t;
  t = SSL_string_to_int(b_29);
  d_29 = t;
  c_47 = t;
  t = term_n_72;
  z_46 = t;
  t = c_47;
  d_47 = t;
  t = term_m_72;
  b_47 = t;
  t = SSL_table_put(z_46, b_47, d_29);
  t = term_s_89;
  return(t);
}
ATerm f_70 (ATerm t)
{
  t = term_s_101;
  return(t);
}
ATerm g_70 (ATerm t)
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
ATerm h_70 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  t = term_n_72;
  e_47 = t;
  t = h_47;
  i_47 = t;
  t = term_m_72;
  f_47 = t;
  t = i_47;
  j_47 = t;
  t = term_x_33;
  g_47 = t;
  t = SSL_table_put(e_47, f_47, g_47);
  t = term_s_89;
  return(t);
}
ATerm i_70 (ATerm t)
{
  t = term_t_101;
  return(t);
}
ATerm j_70 (ATerm t)
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
ATerm k_70 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  t = term_n_72;
  k_47 = t;
  t = n_47;
  o_47 = t;
  t = term_u_101;
  l_47 = t;
  t = o_47;
  p_47 = t;
  t = term_s_89;
  m_47 = t;
  t = SSL_table_put(k_47, l_47, m_47);
  t = term_s_89;
  return(t);
}
ATerm l_70 (ATerm t)
{
  t = term_v_101;
  return(t);
}
ATerm m_70 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_70 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  t = term_n_72;
  q_47 = t;
  t = t_47;
  u_47 = t;
  t = term_w_101;
  r_47 = t;
  t = u_47;
  v_47 = t;
  t = term_s_89;
  s_47 = t;
  t = SSL_table_put(q_47, r_47, s_47);
  t = term_s_89;
  return(t);
}
ATerm o_70 (ATerm t)
{
  t = term_x_101;
  return(t);
}
ATerm p_70 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-v"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
ATerm q_70 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  t = term_n_72;
  w_47 = t;
  t = z_47;
  a_48 = t;
  t = term_y_101;
  x_47 = t;
  t = a_48;
  b_48 = t;
  t = term_s_89;
  y_47 = t;
  t = SSL_table_put(w_47, x_47, y_47);
  t = term_s_89;
  return(t);
}
ATerm r_70 (ATerm t)
{
  t = term_z_101;
  return(t);
}
ATerm s_70 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "--warning"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm t_70 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  {
    ATerm a_102 = t;
    int b_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
        t = term_n_87;
        e_48 = t;
        t = term_n_72;
        c_48 = t;
        t = e_48;
        f_48 = t;
        t = term_n_87;
        d_48 = t;
        t = SSL_table_get(c_48, d_48);
        {
          ATerm c_102 = t;
          int d_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_44 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
              t = eval_config_0_0(t);
              v_44 = t;
              i_48 = t;
              t = term_n_72;
              g_48 = t;
              t = i_48;
              j_48 = t;
              t = term_n_87;
              h_48 = t;
              t = SSL_table_put(g_48, h_48, v_44);
              t = v_44;
              ;
              LocalPopChoice(d_102);
            }
          else
            {
              t = c_102;
            }
          t = Cons_2_0(v_70, w_70, t);
          n_48 = t;
          t = term_n_72;
          k_48 = t;
          t = n_48;
          o_48 = t;
          t = term_n_87;
          l_48 = t;
          t = o_48;
          p_48 = t;
          t = (ATerm) ATinsert(ATempty, j_29);
          m_48 = t;
          t = SSL_table_put(k_48, l_48, m_48);
          t = (ATerm) ATmakeAppl(sym__3, term_n_72, term_n_87, (ATerm) ATinsert(ATempty, j_29));
        }
        ;
        LocalPopChoice(b_102);
      }
    else
      {
        t = a_102;
        t = (ATerm) ATmakeAppl(sym__2, term_n_87, (ATerm) ATinsert(ATempty, j_29));
        t = extend_config_0_0(t);
      }
    t = term_s_89;
  }
  return(t);
}
ATerm u_70 (ATerm t)
{
  t = term_f_102;
  return(t);
}
ATerm v_70 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_70 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm g_102 = t;
  int h_102 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_68, l_68, m_68, t);
      ;
      LocalPopChoice(h_102);
    }
  else
    {
      t = g_102;
      {
        ATerm i_102 = t;
        int j_102 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_68, o_68, p_68, t);
            ;
            LocalPopChoice(j_102);
          }
        else
          {
            t = i_102;
            {
              ATerm k_102 = t;
              int l_102 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(q_68, r_68, s_68, t);
                  ;
                  LocalPopChoice(l_102);
                }
              else
                {
                  t = k_102;
                  {
                    ATerm m_102 = t;
                    int n_102 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(t_68, u_68, v_68, t);
                        ;
                        LocalPopChoice(n_102);
                      }
                    else
                      {
                        t = m_102;
                        {
                          ATerm o_102 = t;
                          int p_102 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(w_68, x_68, y_68, t);
                              ;
                              LocalPopChoice(p_102);
                            }
                          else
                            {
                              t = o_102;
                              {
                                ATerm q_102 = t;
                                int r_102 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(z_68, a_69, b_69, t);
                                    ;
                                    LocalPopChoice(r_102);
                                  }
                                else
                                  {
                                    t = q_102;
                                    {
                                      ATerm s_102 = t;
                                      int t_102 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(c_69, d_69, e_69, t);
                                          ;
                                          LocalPopChoice(t_102);
                                        }
                                      else
                                        {
                                          t = s_102;
                                          {
                                            ATerm u_102 = t;
                                            int v_102 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(f_69, g_69, h_69, t);
                                                ;
                                                LocalPopChoice(v_102);
                                              }
                                            else
                                              {
                                                t = u_102;
                                                {
                                                  ATerm w_102 = t;
                                                  int x_102 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(i_69, j_69, k_69, t);
                                                      ;
                                                      LocalPopChoice(x_102);
                                                    }
                                                  else
                                                    {
                                                      t = w_102;
                                                      {
                                                        ATerm y_102 = t;
                                                        int z_102 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_69, m_69, n_69, t);
                                                            ;
                                                            LocalPopChoice(z_102);
                                                          }
                                                        else
                                                          {
                                                            t = y_102;
                                                            {
                                                              ATerm a_103 = t;
                                                              int b_103 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(o_69, p_69, q_69, t);
                                                                  ;
                                                                  LocalPopChoice(b_103);
                                                                }
                                                              else
                                                                {
                                                                  t = a_103;
                                                                  {
                                                                    ATerm c_103 = t;
                                                                    int d_103 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(r_69, s_69, t_69, t);
                                                                        ;
                                                                        LocalPopChoice(d_103);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_103;
                                                                        {
                                                                          ATerm e_103 = t;
                                                                          int f_103 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(u_69, v_69, w_69, t);
                                                                              ;
                                                                              LocalPopChoice(f_103);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_103;
                                                                              {
                                                                                ATerm g_103 = t;
                                                                                int h_103 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(x_69, y_69, z_69, t);
                                                                                    ;
                                                                                    LocalPopChoice(h_103);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_103;
                                                                                    {
                                                                                      ATerm i_103 = t;
                                                                                      int j_103 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(a_70, b_70, c_70, t);
                                                                                          ;
                                                                                          LocalPopChoice(j_103);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_103;
                                                                                          {
                                                                                            ATerm k_103 = t;
                                                                                            int l_103 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(d_70, e_70, f_70, t);
                                                                                                ;
                                                                                                LocalPopChoice(l_103);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_103;
                                                                                                {
                                                                                                  ATerm m_103 = t;
                                                                                                  int n_103 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(g_70, h_70, i_70, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(n_103);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_103;
                                                                                                      {
                                                                                                        ATerm o_103 = t;
                                                                                                        int p_103 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(j_70, k_70, l_70, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_103);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_103;
                                                                                                            {
                                                                                                              ATerm q_103 = t;
                                                                                                              int r_103 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(m_70, n_70, o_70, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(r_103);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_103;
                                                                                                                  {
                                                                                                                    ATerm s_103 = t;
                                                                                                                    int t_103 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(p_70, q_70, r_70, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_103);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_103;
                                                                                                                        t = ArgOption_3_0(s_70, t_70, u_70, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_104), term_l_96), term_i_104), term_h_104), term_g_104), term_l_96), term_f_104), term_e_104), term_c_104), term_b_104), term_y_103), term_x_103), term_w_103), term_v_103), term_u_103);
  return(t);
}
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm k_29 (ATerm t)
  {
    ATerm k_104 = t;
    int l_104 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_104);
      }
    else
      {
        t = k_104;
        t = Cons_2_0(g_93, k_29, t);
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_29 = ATgetFirst((ATermList) t);
      n_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_29 = NULL,u_29 = NULL;
        t = n_29;
        t = h_0(t);
        t_29 = t;
        t = m_29;
        t = g_0(t);
        u_29 = t;
        t = n_29;
        {
          ATerm x_70 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_29), u_29);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_70, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_89;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_29 = NULL;
  t = term_s_89;
  t = e_0(t);
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_104), v_29), term_q_104), term_l_96), term_p_104), term_l_96), term_o_104), term_n_104), term_l_96), term_m_104);
  return(t);
}
ATerm Program_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,q_48 = NULL,r_48 = NULL;
  z_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_29);
  w_29 = t;
  t = x_29;
  t = l_77(t);
  y_29 = t;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_29);
  q_48 = t;
  t = SSLsetAnnotations(q_48, w_29);
  return(t);
}
ATerm b_71 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_71 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_30), term_s_104);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_30 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  ATerm t_104 = t;
  int u_104 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
      t = term_v_104;
      u_48 = t;
      t = term_n_72;
      s_48 = t;
      t = u_48;
      v_48 = t;
      t = term_v_104;
      t_48 = t;
      t = SSL_table_get(s_48, t_48);
      {
        ATerm w_104 = t;
        int x_104 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_44 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
            t = eval_config_0_0(t);
            z_44 = t;
            y_48 = t;
            t = term_n_72;
            w_48 = t;
            t = y_48;
            z_48 = t;
            t = term_v_104;
            x_48 = t;
            t = SSL_table_put(w_48, x_48, z_44);
            t = z_44;
            ;
            LocalPopChoice(x_104);
          }
        else
          {
            t = w_104;
          }
        e_30 = t;
      }
      ;
      LocalPopChoice(u_104);
    }
  else
    {
      t = t_104;
      {
        ATerm y_70 (ATerm t)
        {
          ATerm z_70 (ATerm t)
          {
            if(((e_30 != NULL) && (e_30 != t)))
              _fail(t);
            else
              e_30 = t;
            return(t);
          }
          t = Program_1_0(z_70, t);
          return(t);
        }
        t = fetch_1_0(y_70, t);
      }
    }
  {
    ATerm y_104 = t;
    int z_104 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_71 (ATerm t)
        {
          t = not_null(e_30);
          return(t);
        }
        t = short_description_1_0(a_71, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(z_104);
      }
    else
      {
        t = y_104;
      }
    t = term_a_105;
    t = echo_0_0(t);
    c_49 = t;
    t = term_k_100;
    a_49 = t;
    t = c_49;
    d_49 = t;
    t = term_m_100;
    b_49 = t;
    t = SSL_table_get(a_49, b_49);
    t = reverse_acc_2_0(_id, b_71, t);
    t = map_1_0(c_71, t);
    {
      ATerm b_105 = t;
      int c_105 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_30 = NULL;
          ATerm d_71 (ATerm t)
          {
            t = not_null(e_30);
            return(t);
          }
          t = long_description_1_0(d_71, t);
          g_30 = t;
          t = (ATerm) ATinsert(CheckATermList(g_30), term_l_96);
          t = echo_0_0(t);
          ;
          LocalPopChoice(c_105);
        }
      else
        {
          t = b_105;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,e_49 = NULL,f_49 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_30);
  h_30 = t;
  t = i_30;
  t = m_77(t);
  j_30 = t;
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_30);
  e_49 = t;
  t = SSLsetAnnotations(e_49, h_30);
  return(t);
}
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm p_30 (ATerm t)
  {
    ATerm d_105 = t;
    int e_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_93, _id, t);
        ;
        LocalPopChoice(e_105);
      }
    else
      {
        t = d_105;
        t = Cons_2_0(_id, p_30, t);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,g_49 = NULL,h_49 = NULL;
  r_30 = t;
  {
    ATerm f_105 = t;
    int g_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_105 = ATgetFirst((ATermList) t);
                ATerm i_105 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_30;
          }
        ;
        LocalPopChoice(g_105);
      }
    else
      {
        t = f_105;
        t = (ATerm) ATinsert(ATempty, r_30);
      }
    s_30 = t;
    h_49 = t;
    t = term_a_74;
    g_49 = t;
    t = SSL_printnl(g_49, s_30);
    t = r_30;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  t = term_v_104;
  k_49 = t;
  t = term_n_72;
  i_49 = t;
  t = k_49;
  l_49 = t;
  t = term_v_104;
  j_49 = t;
  t = SSL_table_get(i_49, j_49);
  {
    ATerm j_105 = t;
    int k_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_45 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
        t = eval_config_0_0(t);
        d_45 = t;
        o_49 = t;
        t = term_n_72;
        m_49 = t;
        t = o_49;
        p_49 = t;
        t = term_v_104;
        n_49 = t;
        t = SSL_table_put(m_49, n_49, d_45);
        t = d_45;
        ;
        LocalPopChoice(k_105);
      }
    else
      {
        t = j_105;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm e_71 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_71 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  t = term_n_72;
  q_49 = t;
  t = t_49;
  u_49 = t;
  t = term_l_105;
  r_49 = t;
  t = u_49;
  v_49 = t;
  t = term_s_89;
  s_49 = t;
  t = SSL_table_put(q_49, r_49, s_49);
  t = term_m_105;
  return(t);
}
ATerm g_71 (ATerm t)
{
  t = term_n_105;
  return(t);
}
ATerm h_71 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_71 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  z_49 = t;
  t = term_n_72;
  w_49 = t;
  t = z_49;
  a_50 = t;
  t = term_l_105;
  x_49 = t;
  t = a_50;
  b_50 = t;
  t = term_s_89;
  y_49 = t;
  t = SSL_table_put(w_49, x_49, y_49);
  f_50 = t;
  t = term_n_72;
  c_50 = t;
  t = f_50;
  g_50 = t;
  t = term_y_101;
  d_50 = t;
  t = g_50;
  h_50 = t;
  t = term_s_89;
  e_50 = t;
  t = SSL_table_put(c_50, d_50, e_50);
  t = term_o_105;
  return(t);
}
ATerm j_71 (ATerm t)
{
  t = term_p_105;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_105 = t;
  int r_105 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_71, f_71, g_71, t);
      ;
      LocalPopChoice(r_105);
    }
  else
    {
      t = q_105;
      t = Option_3_0(h_71, i_71, j_71, t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_31 = NULL,k_31 = NULL,l_31 = NULL,n_31 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__3))
    {
      c_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
      l_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_31, k_31);
  {
    ATerm s_105 = t;
    int t_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_105 = ATgetArgument(t, 0);
            ATerm v_105 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_31, k_31);
        ;
        LocalPopChoice(t_105);
      }
    else
      {
        t = s_105;
        t = (ATerm) ATempty;
      }
    n_31 = t;
    j_50 = t;
    t = (ATerm) ATinsert(CheckATermList(n_31), l_31);
    i_50 = t;
    t = SSL_table_put(c_31, k_31, i_50);
    t = (ATerm) ATmakeAppl(sym__3, c_31, k_31, l_31);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_31 = NULL;
      t = term_s_89;
      t = d_0(t);
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_100, term_m_100, x_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_31 = ATgetFirst((ATermList) t);
          w_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = a_0(t);
      t = term_s_89;
      t = c_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(w_31), c_32);
    }
  return(t);
}
ATerm k_71 (ATerm t)
{
  ATerm f_32 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  f_32 = t;
  m_50 = t;
  t = term_n_72;
  k_50 = t;
  t = m_50;
  n_50 = t;
  t = term_v_104;
  l_50 = t;
  t = SSL_table_put(k_50, l_50, f_32);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  {
    ATerm x_105 = t;
    int y_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_105;
        t = z_111(t);
        ;
        LocalPopChoice(y_105);
      }
    else
      {
        t = x_105;
      }
    t = e_32;
    {
      ATerm l_71 (ATerm t)
      {
        ATerm a_106 = t;
        int b_106 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_106 = t;
            int d_106 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_106);
              }
            else
              {
                t = c_106;
                t = z_111(t);
                t = Cons_2_0(_id, l_71, t);
              }
            ;
            LocalPopChoice(b_106);
          }
        else
          {
            t = a_106;
            {
              ATerm h_32 = NULL,i_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_32 = ATgetFirst((ATermList) t);
                  i_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_32), (ATerm) ATmakeAppl(sym_Undefined_1, h_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_71, l_71, t);
    }
  }
  return(t);
}
ATerm n_71 (ATerm t)
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
ATerm o_71 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  t = term_n_72;
  u_50 = t;
  t = x_50;
  y_50 = t;
  t = term_u_101;
  v_50 = t;
  t = y_50;
  z_50 = t;
  t = term_s_89;
  w_50 = t;
  t = SSL_table_put(u_50, v_50, w_50);
  t = term_e_106;
  return(t);
}
ATerm p_71 (ATerm t)
{
  t = term_f_106;
  return(t);
}
ATerm q_71 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,u_32 = NULL,v_32 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,a_52 = NULL,b_52 = NULL;
  s_32 = t;
  r_50 = t;
  t = term_k_100;
  o_50 = t;
  t = r_50;
  s_50 = t;
  t = term_m_100;
  p_50 = t;
  t = s_50;
  t_50 = t;
  t = (ATerm) ATempty;
  q_50 = t;
  t = SSL_table_put(o_50, p_50, q_50);
  t = s_32;
  {
    ATerm m_71 (ATerm t)
    {
      ATerm g_106 = t;
      int h_106 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_111(t);
          ;
          LocalPopChoice(h_106);
        }
      else
        {
          t = g_106;
          {
            ATerm i_106 = t;
            int j_106 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_71, o_71, p_71, t);
                ;
                LocalPopChoice(j_106);
              }
            else
              {
                t = i_106;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_71, t);
    {
      ATerm k_106 = t;
      int l_106 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_33 = NULL;
          e_33 = t;
          {
            ATerm m_106 = t;
            int n_106 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_51 = NULL,j_51 = NULL;
                t = e_33;
                {
                  ATerm o_106 = t;
                  int p_106 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
                      t = term_u_101;
                      c_51 = t;
                      t = term_n_72;
                      a_51 = t;
                      t = c_51;
                      d_51 = t;
                      t = term_u_101;
                      b_51 = t;
                      t = SSL_table_get(a_51, b_51);
                      {
                        ATerm q_106 = t;
                        int r_106 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_45 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
                            t = eval_config_0_0(t);
                            s_45 = t;
                            g_51 = t;
                            t = term_n_72;
                            e_51 = t;
                            t = g_51;
                            h_51 = t;
                            t = term_u_101;
                            f_51 = t;
                            t = SSL_table_put(e_51, f_51, s_45);
                            t = s_45;
                            ;
                            LocalPopChoice(r_106);
                          }
                        else
                          {
                            t = q_106;
                          }
                      }
                      ;
                      LocalPopChoice(p_106);
                    }
                  else
                    {
                      t = o_106;
                      t = fetch_1_0(q_71, t);
                    }
                  t = e_33;
                  t = default_system_usage_0_0(t);
                  j_51 = t;
                  t = term_x_33;
                  i_51 = t;
                  t = SSL_exit(i_51);
                }
                ;
                LocalPopChoice(n_106);
              }
            else
              {
                t = m_106;
                {
                  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,s_51 = NULL,t_51 = NULL;
                  t = term_l_105;
                  m_51 = t;
                  t = term_n_72;
                  k_51 = t;
                  t = m_51;
                  n_51 = t;
                  t = term_l_105;
                  l_51 = t;
                  t = SSL_table_get(k_51, l_51);
                  {
                    ATerm s_106 = t;
                    int t_106 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_45 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
                        t = eval_config_0_0(t);
                        z_45 = t;
                        q_51 = t;
                        t = term_n_72;
                        o_51 = t;
                        t = q_51;
                        r_51 = t;
                        t = term_l_105;
                        p_51 = t;
                        t = SSL_table_put(o_51, p_51, z_45);
                        t = z_45;
                        ;
                        LocalPopChoice(t_106);
                      }
                    else
                      {
                        t = s_106;
                      }
                    t = e_33;
                    t = default_system_about_0_0(t);
                    t_51 = t;
                    t = term_x_33;
                    s_51 = t;
                    t = SSL_exit(s_51);
                  }
                }
              }
          }
          ;
          LocalPopChoice(l_106);
        }
      else
        {
          t = k_106;
          {
            ATerm u_106 = t;
            int v_106 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
                ATerm r_71 (ATerm t)
                {
                  ATerm s_71 (ATerm t)
                  {
                    if(((u_32 != NULL) && (u_32 != t)))
                      _fail(t);
                    else
                      u_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_71, t);
                  return(t);
                }
                t = fetch_1_0(r_71, t);
                w_51 = t;
                t = term_r_72;
                u_51 = t;
                t = w_51;
                x_51 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_32)), term_w_106);
                v_51 = t;
                t = SSL_printnl(u_51, v_51);
                t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_32)), term_w_106));
                t = default_system_usage_0_0(t);
                z_51 = t;
                t = term_l_75;
                y_51 = t;
                t = SSL_exit(y_51);
                ;
                LocalPopChoice(v_106);
              }
            else
              {
                t = u_106;
              }
          }
        }
      v_32 = t;
      b_52 = t;
      t = term_k_100;
      a_52 = t;
      t = SSL_table_destroy(a_52);
      t = v_32;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_106 = t;
  int y_106 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_106);
    }
  else
    {
      t = x_106;
      {
        ATerm n_33 = NULL,q_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_33 = ATgetFirst((ATermList) t);
            q_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_33;
        {
          ATerm t_71 (ATerm t)
          {
            t = q_33;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_71, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm b_34 (ATerm t)
  {
    ATerm z_106 = t;
    int a_107 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_34, t);
        ;
        LocalPopChoice(a_107);
      }
    else
      {
        t = z_106;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_93(t);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
ATerm _2_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,c_52 = NULL,d_52 = NULL;
  j_34 = t;
  if(match_cons(t, sym__2))
    {
      f_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_34);
  d_34 = t;
  t = f_34;
  t = g_67(t);
  h_34 = t;
  t = g_34;
  t = h_67(t);
  i_34 = t;
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
  c_52 = t;
  t = SSLsetAnnotations(c_52, d_34);
  return(t);
}
ATerm u_71 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_explode_string(p_34);
  return(t);
}
ATerm x_71 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = SSL_explode_string(q_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_34 = NULL;
  t = _2_0(u_71, x_71, t);
  {
    ATerm b_107 = t;
    int c_107 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_34 = NULL,t_34 = NULL;
        if(match_cons(t, sym__2))
          {
            s_34 = ATgetArgument(t, 0);
            t_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_34;
        {
          ATerm y_71 (ATerm t)
          {
            t = t_34;
            return(t);
          }
          t = at_end_1_0(y_71, t);
        }
        ;
        LocalPopChoice(c_107);
      }
    else
      {
        t = b_107;
        {
          ATerm c_46 = NULL,d_46 = NULL;
          c_46 = t;
          t = SSL_explode_term(c_46);
          if(match_cons(t, sym__2))
            {
              ATerm d_107 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_107) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_46;
          t = concat_0_0(t);
        }
      }
    o_34 = t;
    t = SSL_implode_string(o_34);
  }
  return(t);
}
ATerm Cons_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_52 = NULL,f_52 = NULL;
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
  f_52 = t;
  t = (ATerm) ATinsert(CheckATermList(c_35), b_35);
  e_52 = t;
  t = SSLsetAnnotations(e_52, y_34);
  return(t);
}
ATerm z_71 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm a_72 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  g_35 = t;
  t = SSL_explode_string(g_35);
  {
    ATerm e_107 = t;
    int f_107 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_35 (ATerm t)
        {
          ATerm m_107 = t;
          int n_107 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, i_35, t);
              ;
              LocalPopChoice(n_107);
            }
          else
            {
              t = m_107;
              t = Cons_2_0(z_71, a_72, t);
            }
          return(t);
        }
        t = i_35(t);
        ;
        LocalPopChoice(f_107);
      }
    else
      {
        t = e_107;
        t = (ATerm) ATempty;
      }
    h_35 = t;
    t = SSL_implode_string(h_35);
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  j_35 = t;
  j_52 = t;
  t = term_n_72;
  g_52 = t;
  t = j_52;
  k_52 = t;
  t = term_f_96;
  h_52 = t;
  t = k_52;
  l_52 = t;
  t = term_o_107;
  i_52 = t;
  t = SSL_table_put(g_52, h_52, i_52);
  p_52 = t;
  t = term_n_72;
  m_52 = t;
  t = p_52;
  q_52 = t;
  t = term_m_72;
  n_52 = t;
  t = q_52;
  r_52 = t;
  t = term_q_72;
  o_52 = t;
  t = SSL_table_put(m_52, n_52, o_52);
  v_52 = t;
  t = term_n_72;
  s_52 = t;
  t = v_52;
  w_52 = t;
  t = term_e_76;
  t_52 = t;
  t = w_52;
  x_52 = t;
  t = term_x_33;
  u_52 = t;
  t = SSL_table_put(s_52, t_52, u_52);
  b_53 = t;
  t = term_n_72;
  y_52 = t;
  t = b_53;
  c_53 = t;
  t = term_j_76;
  z_52 = t;
  t = c_53;
  d_53 = t;
  t = term_b_77;
  a_53 = t;
  t = SSL_table_put(y_52, z_52, a_53);
  t = term_p_107;
  t = xtc_find_path_0_0(t);
  k_35 = t;
  t = term_q_107;
  t = xtc_find_path_0_0(t);
  l_35 = t;
  t = term_r_107;
  t = xtc_find_path_0_0(t);
  m_35 = t;
  h_53 = t;
  t = term_n_72;
  e_53 = t;
  t = h_53;
  i_53 = t;
  t = term_y_92;
  f_53 = t;
  t = i_53;
  j_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_35), term_y_92), l_35), term_y_92), k_35), term_y_92);
  g_53 = t;
  t = SSL_table_put(e_53, f_53, g_53);
  n_53 = t;
  t = term_n_72;
  k_53 = t;
  t = n_53;
  o_53 = t;
  t = term_h_74;
  l_53 = t;
  t = o_53;
  p_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_107), term_s_107);
  m_53 = t;
  t = SSL_table_put(k_53, l_53, m_53);
  t = term_u_107;
  t = xtc_find_path_0_0(t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_v_107);
  t = conc_strings_0_0(t);
  p_35 = t;
  t = term_u_107;
  t = xtc_find_path_0_0(t);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, term_v_107);
  t = conc_strings_0_0(t);
  r_35 = t;
  t = term_w_107;
  t = xtc_find_path_0_0(t);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, term_v_107);
  t = conc_strings_0_0(t);
  t_35 = t;
  t_53 = t;
  t = term_n_72;
  q_53 = t;
  t = t_53;
  u_53 = t;
  t = term_k_73;
  r_53 = t;
  t = u_53;
  v_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_35), term_y_92), r_35), term_y_92), p_35), term_y_92);
  s_53 = t;
  t = SSL_table_put(q_53, r_53, s_53);
  t = term_u_107;
  t = xtc_find_path_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, term_x_107);
  t = conc_strings_0_0(t);
  v_35 = t;
  t = term_w_107;
  t = xtc_find_path_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, term_x_107);
  t = conc_strings_0_0(t);
  x_35 = t;
  z_53 = t;
  t = term_n_72;
  w_53 = t;
  t = z_53;
  a_54 = t;
  t = term_c_73;
  x_53 = t;
  t = a_54;
  b_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_108), term_b_108), x_35), term_y_107), term_a_108), term_z_107), v_35), term_y_107);
  y_53 = t;
  t = SSL_table_put(w_53, x_53, y_53);
  f_54 = t;
  t = term_n_72;
  c_54 = t;
  t = f_54;
  g_54 = t;
  t = term_n_87;
  d_54 = t;
  t = g_54;
  h_54 = t;
  t = (ATerm) ATempty;
  e_54 = t;
  t = SSL_table_put(c_54, d_54, e_54);
  t = j_35;
  return(t);
}
ATerm b_72 (ATerm t)
{
  ATerm b_36 = NULL,u_46 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_36 = t;
  t = term_g_87;
  u_55 = t;
  t = term_n_72;
  s_55 = t;
  t = u_55;
  v_55 = t;
  t = term_g_87;
  t_55 = t;
  t = SSL_table_get(s_55, t_55);
  {
    ATerm d_108 = t;
    int e_108 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
        t = eval_config_0_0(t);
        t_46 = t;
        y_55 = t;
        t = term_n_72;
        w_55 = t;
        t = y_55;
        z_55 = t;
        t = term_g_87;
        x_55 = t;
        t = SSL_table_put(w_55, x_55, t_46);
        t = t_46;
        ;
        LocalPopChoice(e_108);
      }
    else
      {
        t = d_108;
      }
    u_46 = t;
    t = term_f_108;
    c_56 = t;
    t = term_r_72;
    a_56 = t;
    t = c_56;
    d_56 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_46), term_f_108);
    b_56 = t;
    t = SSL_printnl(a_56, b_56);
    t = b_36;
  }
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm g_108 = t;
    int h_108 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_35 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,s_54 = NULL,q_54 = NULL,r_54 = NULL,t_54 = NULL;
        t = term_w_101;
        k_54 = t;
        t = term_n_72;
        i_54 = t;
        t = k_54;
        l_54 = t;
        t = term_w_101;
        j_54 = t;
        t = SSL_table_get(i_54, j_54);
        {
          ATerm n_108 = t;
          int o_108 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_46 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
              t = eval_config_0_0(t);
              h_46 = t;
              o_54 = t;
              t = term_n_72;
              m_54 = t;
              t = o_54;
              p_54 = t;
              t = term_w_101;
              n_54 = t;
              t = SSL_table_put(m_54, n_54, h_46);
              t = h_46;
              ;
              LocalPopChoice(o_108);
            }
          else
            {
              t = n_108;
            }
          t = term_p_108;
          t = xtc_find_0_0(t);
          y_35 = t;
          r_54 = t;
          t = term_a_74;
          q_54 = t;
          t = SSL_copy(y_35, q_54);
          t_54 = t;
          t = term_x_33;
          s_54 = t;
          t = SSL_exit(s_54);
        }
        ;
        LocalPopChoice(h_108);
      }
    else
      {
        t = g_108;
      }
    {
      ATerm q_108 = t;
      int r_108 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,c_55 = NULL,d_55 = NULL;
          t = term_y_101;
          w_54 = t;
          t = term_n_72;
          u_54 = t;
          t = w_54;
          x_54 = t;
          t = term_y_101;
          v_54 = t;
          t = SSL_table_get(u_54, v_54);
          {
            ATerm s_108 = t;
            int u_108 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_46 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
                t = eval_config_0_0(t);
                l_46 = t;
                a_55 = t;
                t = term_n_72;
                y_54 = t;
                t = a_55;
                b_55 = t;
                t = term_y_101;
                z_54 = t;
                t = SSL_table_put(y_54, z_54, l_46);
                t = l_46;
                ;
                LocalPopChoice(u_108);
              }
            else
              {
                t = s_108;
              }
            t = strc_version_0_0(t);
            d_55 = t;
            t = term_x_33;
            c_55 = t;
            t = SSL_exit(c_55);
          }
          ;
          LocalPopChoice(r_108);
        }
      else
        {
          t = q_108;
        }
      {
        ATerm v_108 = t;
        int w_108 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_35 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
            z_35 = t;
            t = term_g_87;
            g_55 = t;
            t = term_n_72;
            e_55 = t;
            t = g_55;
            h_55 = t;
            t = term_g_87;
            f_55 = t;
            t = SSL_table_get(e_55, f_55);
            {
              ATerm x_108 = t;
              int y_108 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_46 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
                  t = eval_config_0_0(t);
                  p_46 = t;
                  k_55 = t;
                  t = term_n_72;
                  i_55 = t;
                  t = k_55;
                  l_55 = t;
                  t = term_g_87;
                  j_55 = t;
                  t = SSL_table_put(i_55, j_55, p_46);
                  t = p_46;
                  ;
                  LocalPopChoice(y_108);
                }
              else
                {
                  t = x_108;
                }
              t = z_35;
            }
            ;
            LocalPopChoice(w_108);
          }
        else
          {
            t = v_108;
            {
              ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
              o_55 = t;
              t = term_r_72;
              m_55 = t;
              t = o_55;
              p_55 = t;
              t = (ATerm) ATinsert(ATempty, term_z_108);
              n_55 = t;
              t = SSL_printnl(m_55, n_55);
              r_55 = t;
              t = term_l_75;
              q_55 = t;
              t = SSL_exit(q_55);
              t = (ATerm) ATinsert(ATempty, term_z_108);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(b_72, t);
      }
    }
  }
  return(t);
}
ATerm c_72 (ATerm t)
{
  t = if_verbose1_1_0(e_72, t);
  return(t);
}
ATerm d_72 (ATerm t)
{
  t = xtc_temp_files_1_0(f_72, t);
  return(t);
}
ATerm e_72 (ATerm t)
{
  ATerm c_36 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  c_36 = t;
  g_56 = t;
  t = term_r_72;
  e_56 = t;
  t = g_56;
  h_56 = t;
  t = (ATerm) ATinsert(CheckATermList(c_36), term_a_109);
  f_56 = t;
  t = SSL_printnl(e_56, f_56);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(CheckATermList(c_36), term_a_109));
  return(t);
}
ATerm f_72 (ATerm t)
{
  ATerm b_109 = t;
  int c_109 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_36 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
      t = term_g_87;
      k_56 = t;
      t = term_n_72;
      i_56 = t;
      t = k_56;
      l_56 = t;
      t = term_g_87;
      j_56 = t;
      t = SSL_table_get(i_56, j_56);
      {
        ATerm d_109 = t;
        int e_109 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_47 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
            t = eval_config_0_0(t);
            a_47 = t;
            o_56 = t;
            t = term_n_72;
            m_56 = t;
            t = o_56;
            p_56 = t;
            t = term_g_87;
            n_56 = t;
            t = SSL_table_put(m_56, n_56, a_47);
            t = a_47;
            ;
            LocalPopChoice(e_109);
          }
        else
          {
            t = d_109;
          }
        e_36 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_36);
      }
      ;
      LocalPopChoice(c_109);
    }
  else
    {
      t = b_109;
      t = term_l_90;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm g_72 (ATerm t)
{
  ATerm g_36 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  t = run_time_0_0(t);
  g_36 = t;
  s_56 = t;
  t = term_r_72;
  q_56 = t;
  t = s_56;
  t_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_109), g_36), term_f_109);
  r_56 = t;
  t = SSL_printnl(q_56, r_56);
  t = (ATerm) ATmakeAppl(sym__2, term_r_72, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_109), g_36), term_f_109));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm h_109 = t;
  int i_109 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_56 = NULL,v_56 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(c_72, d_72, t);
      t = if_verbose2_1_0(g_72, t);
      v_56 = t;
      t = term_x_33;
      u_56 = t;
      t = SSL_exit(u_56);
      ;
      LocalPopChoice(i_109);
    }
  else
    {
      t = h_109;
      {
        ATerm h_36 = NULL,a_57 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,b_57 = NULL;
        t = run_time_0_0(t);
        h_36 = t;
        y_56 = t;
        t = term_r_72;
        w_56 = t;
        t = y_56;
        z_56 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_109), h_36), term_j_109);
        x_56 = t;
        t = SSL_printnl(w_56, x_56);
        b_57 = t;
        t = term_l_75;
        a_57 = t;
        t = SSL_exit(a_57);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
