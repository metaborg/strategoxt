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
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
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
ATerm term_v_46;
ATerm term_s_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_c_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_v_45;
ATerm term_s_45;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_j_45;
ATerm term_g_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_r_44;
ATerm term_o_44;
ATerm term_l_44;
ATerm term_i_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_r_43;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_h_40;
ATerm term_x_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_n_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_p_26;
void init_constant_terms (void)
{
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_33, term_q_30, term_y_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_34, term_x_26, term_b_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_34, term_y_30, term_e_34);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_34, term_h_34, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_34, term_l_34, term_m_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_34, term_p_34, term_q_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_34, term_t_34, term_u_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_34, term_x_34, term_y_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_35, term_b_35, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_35, term_f_35, term_g_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_35, term_j_35, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_f_31, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_35, term_q_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_u_35, term_v_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_35, term_y_35, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_36, term_c_36, term_d_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_36, term_g_36, term_h_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_36, term_k_36, term_l_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_36, term_o_36, term_p_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_36, term_s_36, term_t_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_36, term_w_36, term_x_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_36, term_a_37, term_b_37);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_37, term_e_37, term_f_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_37, term_i_37, term_j_37);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_37, term_a_31, term_m_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_37, term_p_37, term_q_37);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_37, term_t_37, term_u_37);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_37, term_x_37, term_y_37);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_f_32);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym__3, term_f_39, term_i_48, term_f_32);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm output_canonical_0_0 (ATerm);
ATerm stratego_cf_0_0 (ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm output_optimized_0_0 (ATerm);
ATerm olevel1_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm stratego_of_0_0 (ATerm);
ATerm optimize2_0_0 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm const_prop_0_0 (ATerm);
ATerm olevel3_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm olevel5_1_0 (ATerm u_109 (ATerm), ATerm);
ATerm inline_0_0 (ATerm);
ATerm desugar_case_0_0 (ATerm);
ATerm olevel2_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm compile_match_0_0 (ATerm);
ATerm olevel_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm olevel4_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm fusion_0_0 (ATerm);
ATerm optimize1_0_0 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm stratego_nf_0_0 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm repair_types_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm xtc_io_transform_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm add_main_0_0 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm dep_name_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm i_71 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm basename_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm xtc_input_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm compile_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm);
ATerm debug_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm strc_announce_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm try_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm o_100 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm);
ATerm union_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_105 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t)
{
  ATerm f_13 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_92(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = f_13;
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_0 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_0;
        t = foldr_2_0(s_92, t_92, t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, w_0);
        t = t_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,a_1 = NULL;
  x_0 = t;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_1;
  t = foldr_2_0(l_96, m_96, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  t = times_0_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_p_26;
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm c_1 = NULL,d_1 = NULL;
      if(match_cons(t, sym__2))
        {
          c_1 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_1, d_1);
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = q_26;
            t = SSL_addr(c_1, d_1);
          }
      }
      return(t);
    }
    t = crush_2_0(b_0, o_0, t);
    b_1 = t;
    t = SSL_TicksToSeconds(b_1);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm i_1 = NULL,j_1 = NULL;
    i_1 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    j_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_1, term_x_26);
    t = geq_0_0(t);
    t = i_1;
    t = k_100(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = say_1_0(v_0, t);
      return(t);
    }
    t = if_verbose2_1_0(u_0, t);
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_27;
          t = get_config_0_0(t);
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          {
            ATerm z_0 (ATerm t)
            {
              t = term_e_27;
              return(t);
            }
            t = get_outfile_1_0(z_0, t);
          }
        }
      l_1 = t;
      t = term_i_27;
      t = get_config_0_0(t);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_27, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_1), l_1), term_d_27), k_1));
      {
        ATerm e_1 (ATerm t)
        {
          ATerm f_0 = NULL;
          f_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_0));
          t = f_0;
          return(t);
        }
        t = if_verbose3_1_0(e_1, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
      }
    }
  }
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_k_27;
        return(t);
      }
      t = say_1_0(g_1, t);
      return(t);
    }
    t = if_verbose2_1_0(f_1, t);
    {
      ATerm h_1 (ATerm t)
      {
        t = term_l_27;
        return(t);
      }
      t = get_outfile_1_0(h_1, t);
      q_1 = t;
      t = term_n_27;
      t = get_config_0_0(t);
      r_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_1), term_d_27), p_1), term_o_27));
      t = conc_0_0(t);
      s_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_27, s_1);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm y_0 = NULL;
          y_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_0));
          t = y_0;
          return(t);
        }
        t = if_verbose3_1_0(m_1, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
      }
    }
  }
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL;
      t_1 = t;
      t = term_o_27;
      t = get_config_0_0(t);
      t = t_1;
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            ATerm v_1 = NULL;
            v_1 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(v_1), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(CheckATermList(v_1), term_s_27));
            return(t);
          }
          t = if_verbose1_1_0(y_1, t);
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          t = c_to_object_code_0_0(t);
          t = link_object_code_0_0(t);
          return(t);
        }
        t = profile_p__2_0(u_1, x_1, t);
      }
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_2;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(o_2, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(o_2);
        t = term_v_27;
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm w_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL;
              t = m_2;
              t = q_0(t);
              n_1 = t;
              {
                ATerm a_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_28 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = b_28;
                        {
                          ATerm w_1 = NULL;
                          w_1 = t;
                          if((o_2 != t))
                            {
                              _fail(t);
                            }
                          t = w_1;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_28;
                  }
                t = SSL_rename(o_2, n_1);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              }
              ;
              LocalPopChoice(z_27);
            }
          else
            {
              t = w_27;
              t = m_2;
              t = q_0(t);
              if((o_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_2);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(z_108, z_1, t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_d_28;
    return(t);
  }
  t = xtc_transform_1_0(a_2, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_e_28;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm u_2 = NULL;
    t = term_f_28;
    t = xtc_find_0_0(t);
    u_2 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_2), term_g_28);
    return(t);
  }
  t = xtc_transform_2_0(b_2, c_2, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm x_2 = NULL,b_3 = NULL;
    t = pass_verbose_0_0(t);
    x_2 = t;
    t = term_i_28;
    t = get_config_0_0(t);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm c_3 = NULL;
        c_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_3), term_i_28);
        return(t);
      }
      t = map_1_0(f_2, t);
      b_3 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_3), (ATerm) ATinsert(ATempty, term_u_28)), x_2);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(d_2, e_2, t);
  return(t);
}
ATerm output_canonical_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm d_3 = NULL;
    d_3 = t;
    t = term_v_28;
    t = get_config_0_0(t);
    t = d_3;
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_f_29;
          return(t);
        }
        t = get_outfile_1_0(j_2, t);
        return(t);
      }
      t = copy_to_1_0(i_2, t);
      {
        ATerm k_2 (ATerm t)
        {
          t = term_g_29;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          ATerm e_3 = NULL;
          t = pass_verbose_0_0(t);
          e_3 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(e_3), term_p_29), term_l_29);
          return(t);
        }
        t = xtc_transform_2_0(k_2, l_2, t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = get_outfile_1_0(r_2, t);
            return(t);
          }
          t = copy_to_1_0(p_2, t);
          {
            ATerm s_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_u_29);
              return(t);
            }
            t = say_1_0(s_2, t);
            t = d_3;
          }
        }
      }
    }
    return(t);
  }
  t = try_1_0(h_2, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm h_3 = NULL;
    t = pass_verbose_0_0(t);
    h_3 = t;
    t = (ATerm) ATinsert(CheckATermList(h_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(t_2, v_2, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = term_w_29;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm i_3 = NULL;
    t = pass_verbose_0_0(t);
    i_3 = t;
    t = (ATerm) ATinsert(CheckATermList(i_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(w_2, y_2, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      t = term_x_29;
      return(t);
    }
    t = say_1_0(a_3, t);
    return(t);
  }
  t = if_verbose2_1_0(z_2, t);
  {
    ATerm g_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        ATerm j_3 = NULL;
        j_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(CheckATermList(j_3), term_b_30));
        return(t);
      }
      t = if_verbose1_1_0(q_3, t);
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      t = canonicalize_0_0(t);
      t = olevel3_1_0(bound_unbound_vars_0_0, t);
      t = stratego_cf_0_0(t);
      t = output_canonical_0_0(t);
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      t = abox2text_0_0(t);
      {
        ATerm u_3 (ATerm t)
        {
          ATerm v_3 (ATerm t)
          {
            t = term_e_30;
            return(t);
          }
          t = get_outfile_1_0(v_3, t);
          return(t);
        }
        t = rename_to_1_0(u_3, t);
      }
      return(t);
    }
    t = profile_p__2_0(g_3, o_3, t);
  }
  return(t);
}
ATerm output_optimized_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm k_3 = NULL;
    k_3 = t;
    t = term_j_30;
    t = get_config_0_0(t);
    t = k_3;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          t = term_m_30;
          return(t);
        }
        t = get_outfile_1_0(k_4, t);
        return(t);
      }
      t = copy_to_1_0(a_4, t);
      {
        ATerm q_4 (ATerm t)
        {
          t = term_g_29;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          ATerm l_3 = NULL;
          t = pass_verbose_0_0(t);
          l_3 = t;
          t = (ATerm) ATinsert(CheckATermList(l_3), term_l_29);
          return(t);
        }
        t = xtc_transform_2_0(q_4, r_4, t);
        {
          ATerm w_4 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = term_n_30;
              return(t);
            }
            t = get_outfile_1_0(c_5, t);
            return(t);
          }
          t = copy_to_1_0(w_4, t);
          {
            ATerm d_5 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_u_29);
              return(t);
            }
            t = say_1_0(d_5, t);
            t = k_3;
          }
        }
      }
    }
    return(t);
  }
  t = try_1_0(w_3, t);
  return(t);
}
ATerm olevel1_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    t = term_q_30;
    return(t);
  }
  t = olevel_2_0(m_5, q_109, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    t = term_r_30;
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm m_3 = NULL;
    t = pass_verbose_0_0(t);
    m_3 = t;
    t = (ATerm) ATinsert(CheckATermList(m_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(o_5, p_5, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    t = term_s_30;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm n_3 = NULL;
    t = pass_verbose_0_0(t);
    n_3 = t;
    t = (ATerm) ATinsert(CheckATermList(n_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(s_5, u_5, t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = term_t_30;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm p_3 = NULL;
    t = pass_verbose_0_0(t);
    p_3 = t;
    t = (ATerm) ATinsert(CheckATermList(p_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(y_5, z_5, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 (ATerm t)
      {
        t = term_w_30;
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        ATerm r_3 = NULL;
        t = pass_verbose_0_0(t);
        r_3 = t;
        t = (ATerm) ATinsert(CheckATermList(r_3), term_u_28);
        return(t);
      }
      t = xtc_transform_2_0(b_6, c_6, t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm f_6 (ATerm t)
        {
          t = term_w_30;
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          ATerm s_3 = NULL;
          t = pass_verbose_0_0(t);
          s_3 = t;
          t = (ATerm) ATinsert(CheckATermList(s_3), term_u_28);
          return(t);
        }
        t = xtc_transform_2_0(f_6, g_6, t);
      }
    }
  return(t);
}
ATerm const_prop_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = term_x_30;
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    ATerm t_3 = NULL;
    t = pass_verbose_0_0(t);
    t_3 = t;
    t = (ATerm) ATinsert(CheckATermList(t_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(j_6, m_6, t);
  return(t);
}
ATerm olevel3_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    t = term_y_30;
    return(t);
  }
  t = olevel_2_0(n_6, s_109, t);
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    t = term_z_30;
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    ATerm x_3 = NULL;
    t = pass_verbose_0_0(t);
    x_3 = t;
    t = (ATerm) ATinsert(CheckATermList(x_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(q_6, r_6, t);
  return(t);
}
ATerm olevel5_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = term_a_31;
    return(t);
  }
  t = olevel_2_0(s_6, u_109, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    t = term_b_31;
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    ATerm y_3 = NULL;
    t = pass_verbose_0_0(t);
    y_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(t_6, u_6, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm z_3 = NULL;
    t = pass_verbose_0_0(t);
    z_3 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(v_6, w_6, t);
  return(t);
}
ATerm olevel2_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  t = olevel_2_0(x_6, r_109, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    t = term_d_31;
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm b_4 = NULL;
    t = pass_verbose_0_0(t);
    b_4 = t;
    t = (ATerm) ATinsert(CheckATermList(b_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(y_6, z_6, t);
  return(t);
}
ATerm olevel_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
    c_4 = t;
    t = o_109(t);
    d_4 = t;
    t = term_e_31;
    t = get_config_0_0(t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, d_4);
    t = geq_0_0(t);
    t = c_4;
    t = p_109(t);
    return(t);
  }
  t = try_1_0(a_7, t);
  return(t);
}
ATerm olevel4_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    t = term_f_31;
    return(t);
  }
  t = olevel_2_0(b_7, t_109, t);
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    t = term_g_31;
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm f_4 = NULL;
    t = pass_verbose_0_0(t);
    f_4 = t;
    t = (ATerm) ATinsert(CheckATermList(f_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(d_7, e_7, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    t = term_h_31;
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    ATerm g_4 = NULL;
    t = pass_verbose_0_0(t);
    g_4 = t;
    t = (ATerm) ATinsert(CheckATermList(g_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(f_7, g_7, t);
  return(t);
}
ATerm optimize1_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    t = term_i_31;
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm i_4 = NULL;
    t = pass_verbose_0_0(t);
    i_4 = t;
    t = (ATerm) ATinsert(CheckATermList(i_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(h_7, i_7, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm k_7 (ATerm t)
    {
      t = term_j_31;
      return(t);
    }
    t = say_1_0(k_7, t);
    return(t);
  }
  t = if_verbose2_1_0(j_7, t);
  {
    ATerm l_7 (ATerm t)
    {
      ATerm p_7 (ATerm t)
      {
        ATerm j_4 = NULL;
        j_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_4), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(CheckATermList(j_4), term_k_31));
        return(t);
      }
      t = if_verbose1_1_0(p_7, t);
      return(t);
    }
    ATerm n_7 (ATerm t)
    {
      ATerm q_7 (ATerm t)
      {
        ATerm l_4 = NULL;
        l_4 = t;
        t = term_e_31;
        t = get_config_0_0(t);
        {
          ATerm r_7 (ATerm t)
          {
            t = term_l_31;
            return(t);
          }
          t = debug_1_0(r_7, t);
          t = l_4;
        }
        return(t);
      }
      t = if_verbose3_1_0(q_7, t);
      t = olevel1_1_0(optimize1_0_0, t);
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            ATerm m_4 = NULL;
            m_4 = t;
            {
              ATerm m_31 = t;
              if((PushChoice() == 0))
                {
                  t = term_n_31;
                  t = get_config_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_31;
                }
              t = m_4;
              t = fusion_0_0(t);
            }
            return(t);
          }
          t = try_1_0(t_7, t);
          return(t);
        }
        t = olevel2_1_0(s_7, t);
        t = olevel4_1_0(inline_0_0, t);
        t = olevel4_1_0(dead_def_elim_0_0, t);
        t = olevel4_1_0(optimize2_0_0, t);
        t = define_congruences_0_0(t);
        {
          ATerm y_7 (ATerm t)
          {
            t = const_prop_0_0(t);
            t = bound_unbound_vars_0_0(t);
            t = dead_var_elim_0_0(t);
            return(t);
          }
          t = olevel4_1_0(y_7, t);
          t = olevel4_1_0(optimize2_0_0, t);
          t = olevel2_1_0(compile_match_0_0, t);
          t = olevel2_1_0(desugar_case_0_0, t);
          t = olevel5_1_0(inline_0_0, t);
          t = olevel5_1_0(dead_def_elim_0_0, t);
          t = olevel3_1_0(optimize2_0_0, t);
          {
            ATerm a_8 (ATerm t)
            {
              t = const_prop_0_0(t);
              t = bound_unbound_vars_0_0(t);
              t = dead_var_elim_0_0(t);
              return(t);
            }
            t = olevel3_1_0(a_8, t);
            t = olevel1_1_0(optimize2_0_0, t);
            t = olevel1_1_0(stratego_of_0_0, t);
            t = olevel1_1_0(output_optimized_0_0, t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2_0(l_7, n_7, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    t = term_o_31;
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm n_4 = NULL;
    t = pass_verbose_0_0(t);
    n_4 = t;
    t = (ATerm) ATinsert(CheckATermList(n_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(e_8, g_8, t);
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    t = term_p_31;
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    ATerm p_4 = NULL;
    t = pass_verbose_0_0(t);
    p_4 = t;
    t = (ATerm) ATinsert(CheckATermList(p_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(h_8, k_8, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    ATerm t_4 = NULL,v_4 = NULL;
    t = pass_verbose_0_0(t);
    t_4 = t;
    t = term_r_31;
    t = get_config_0_0(t);
    {
      ATerm w_8 (ATerm t)
      {
        ATerm x_4 = NULL;
        x_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_r_31);
        return(t);
      }
      t = map_1_0(w_8, t);
      v_4 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(v_4), (ATerm) ATinsert(ATempty, term_u_28)), t_4);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(m_8, u_8, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    t = term_s_31;
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    ATerm y_4 = NULL;
    t = pass_verbose_0_0(t);
    y_4 = t;
    t = (ATerm) ATinsert(CheckATermList(y_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(y_8, z_8, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    ATerm z_4 = NULL;
    t = pass_verbose_0_0(t);
    z_4 = t;
    t = (ATerm) ATinsert(CheckATermList(z_4), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(a_9, b_9, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm a_5 = NULL;
    a_5 = t;
    t = term_u_31;
    t = get_config_0_0(t);
    t = a_5;
    {
      ATerm v_31 = t;
      int w_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0_0(t);
          ;
          LocalPopChoice(w_31);
        }
      else
        {
          t = v_31;
          t = (ATerm) ATinsert(ATempty, term_x_31);
          t = fatal_error_0_0(t);
        }
      {
        ATerm d_9 (ATerm t)
        {
          ATerm e_9 (ATerm t)
          {
            t = term_y_31;
            return(t);
          }
          t = get_outfile_1_0(e_9, t);
          return(t);
        }
        t = copy_to_1_0(d_9, t);
        {
          ATerm f_9 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_z_31);
            return(t);
          }
          t = say_1_0(f_9, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(c_9, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm b_5 = NULL,e_5 = NULL;
    b_5 = t;
    t = term_a_32;
    t = get_config_0_0(t);
    e_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_5, term_x_26);
    t = geq_0_0(t);
    t = b_5;
    t = m_101(t);
    return(t);
  }
  t = try_1_0(g_9, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  ATerm h_9 (ATerm t)
  {
    t = term_b_32;
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    ATerm i_5 = NULL;
    t = pass_verbose_0_0(t);
    i_5 = t;
    t = (ATerm) ATinsert(CheckATermList(i_5), term_u_28);
    return(t);
  }
  t = xtc_transform_2_0(h_9, i_9, t);
  {
    ATerm j_9 (ATerm t)
    {
      ATerm k_9 (ATerm t)
      {
        ATerm l_9 (ATerm t)
        {
          t = term_c_32;
          return(t);
        }
        t = get_outfile_1_0(l_9, t);
        g_5 = t;
        return(t);
      }
      t = copy_to_1_0(k_9, t);
      {
        ATerm m_9 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_5)), term_d_32);
          return(t);
        }
        t = say_1_0(m_9, t);
      }
      return(t);
    }
    t = if_keep2_1_0(j_9, t);
  }
  return(t);
}
ATerm repair_types_0_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  ATerm q_9 (ATerm t)
  {
    ATerm j_5 = NULL;
    t = pass_verbose_0_0(t);
    j_5 = t;
    t = (ATerm) ATinsert(ATempty, j_5);
    t = concat_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(o_9, q_9, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm k_5 = NULL,l_5 = NULL;
    k_5 = t;
    t = term_a_32;
    t = get_config_0_0(t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, term_y_30);
    t = geq_0_0(t);
    t = k_5;
    t = n_101(t);
    return(t);
  }
  t = try_1_0(r_9, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_32;
  t = d_79(t);
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_32, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_5), (ATerm) ATempty))))));
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = j_109(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm r_5 = NULL,t_5 = NULL;
  ATerm s_9 (ATerm t)
  {
    ATerm v_5 = NULL;
    v_5 = t;
    t = term_h_32;
    t = get_config_0_0(t);
    r_5 = t;
    {
      ATerm u_9 (ATerm t)
      {
        ATerm v_9 (ATerm t)
        {
          t = term_i_32;
          return(t);
        }
        t = debug_1_0(v_9, t);
        return(t);
      }
      t = if_verbose2_1_0(u_9, t);
      t = v_5;
      {
        ATerm w_9 (ATerm t)
        {
          ATerm z_9 (ATerm t)
          {
            t = r_5;
            return(t);
          }
          t = AddMain_1_0(z_9, t);
          return(t);
        }
        t = xtc_io_transform_1_0(w_9, t);
      }
    }
    return(t);
  }
  t = try_1_0(s_9, t);
  {
    ATerm c_10 (ATerm t)
    {
      ATerm d_10 (ATerm t)
      {
        ATerm f_10 (ATerm t)
        {
          t = term_j_32;
          return(t);
        }
        t = get_outfile_1_0(f_10, t);
        t_5 = t;
        return(t);
      }
      t = copy_to_1_0(d_10, t);
      {
        ATerm g_10 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_5)), term_k_32);
          return(t);
        }
        t = say_1_0(g_10, t);
      }
      return(t);
    }
    t = if_keep3_1_0(c_10, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  ATerm m_10 (ATerm t)
  {
    ATerm a_6 = NULL;
    a_6 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_5 = ATgetFirst((ATermList) t);
        {
          ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_5;
    {
      ATerm n_10 (ATerm t)
      {
        ATerm o_10 (ATerm t)
        {
          ATerm d_6 = NULL;
          d_6 = t;
          t = SSL_remove(d_6);
          return(t);
        }
        t = try_1_0(o_10, t);
        return(t);
      }
      t = map_1_0(n_10, t);
      t = a_6;
      {
        ATerm p_10 (ATerm t)
        {
          t = term_m_32;
          return(t);
        }
        t = end_scope_1_0(p_10, t);
      }
    }
    return(t);
  }
  t = repeat_1_0(m_10, t);
  x_5 = t;
  t = SSL_exit(x_5);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm q_10 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_27;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = term_v_27;
      }
    return(t);
  }
  t = copy_to_1_0(q_10, t);
  t = term_p_26;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  t = e_79(t);
  h_6 = t;
  t = term_p_32;
  t = get_config_0_0(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, h_6);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,o_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL;
        t = m_7;
        t = p_0(t);
        g_2 = t;
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(o_7, g_2);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_7);
        }
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 = NULL;
              t = m_7;
              t = p_0(t);
              n_2 = t;
              {
                ATerm w_32 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = x_32;
                        {
                          ATerm z_32 = t;
                          int a_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(a_33);
                            }
                          else
                            {
                              t = z_32;
                              {
                                ATerm q_2 = NULL;
                                q_2 = t;
                                if((o_7 != t))
                                  {
                                    _fail(t);
                                  }
                                t = q_2;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_32;
                  }
                t = SSL_copy(o_7, n_2);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_7);
              }
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = m_7;
              t = p_0(t);
              if((o_7 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_7);
            }
        }
      }
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm r_10 (ATerm t)
  {
    ATerm u_7 = NULL,v_7 = NULL;
    u_7 = t;
    t = term_b_33;
    t = get_config_0_0(t);
    t = u_7;
    {
      ATerm u_10 (ATerm t)
      {
        ATerm v_10 (ATerm t)
        {
          t = term_c_33;
          return(t);
        }
        t = get_outfile_1_0(v_10, t);
        return(t);
      }
      t = copy_to_1_0(u_10, t);
      v_7 = t;
      t = (ATerm) ATinsert(ATempty, term_d_33);
      t = echo_0_0(t);
      t = v_7;
      t = xtc_io_exit_0_0(t);
    }
    return(t);
  }
  t = try_1_0(r_10, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,z_7 = NULL;
  t = term_a_32;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = term_q_30;
      }
    w_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_7, term_q_30);
    {
      ATerm g_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(w_7, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_33);
        }
      else
        {
          t = g_33;
          t = SSL_subtr(w_7, (ATerm) ATmakeInt(1));
        }
      z_7 = t;
      t = SSL_int_to_string(z_7);
      x_7 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_7), term_a_32);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  t = term_u_26;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = term_q_30;
      }
    b_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_8, term_q_30);
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          t = SSL_subtr(b_8, (ATerm) ATmakeInt(1));
        }
      d_8 = t;
      t = SSL_int_to_string(d_8);
      c_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, c_8), term_u_26);
    }
  }
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      t = term_p_32;
      t = get_config_0_0(t);
    }
  f_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_8), term_o_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = i_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(j_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, term_p_33);
  t = open_stream_0_0(t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, n_8);
  t = g_99(t);
  t = fclose_0_0(t);
  t = n_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm y_10 (ATerm t)
  {
    ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_33 = ATgetArgument(t, 0);
        if(match_cons(q_33, sym_Stream_1))
          {
            p_8 = ATgetArgument(q_33, 0);
          }
        else
          _fail(t);
        q_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(p_8, q_8);
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
    return(t);
  }
  t = WriteToFile_1_0(y_10, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  t = xtc_new_file_0_0(t);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, s_8);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(t_8);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(h_109, i_109, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm z_10 (ATerm t)
  {
    ATerm x_8 = NULL;
    x_8 = t;
    t = SSL_explode_string(x_8);
    return(t);
  }
  t = map_1_0(z_10, t);
  t = concat_0_0(t);
  v_8 = t;
  t = SSL_implode_string(v_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL;
  x_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_9 = ATgetArgument(t, 0);
      {
        ATerm f_3 = NULL;
        t = SSL_int_to_string(y_9);
        f_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_33), f_3), term_r_33);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm h_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_9 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
          b_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_10);
      h_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_10), term_u_33), h_4), term_t_33), y_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm h_10 = NULL;
  ATerm b_11 (ATerm t)
  {
    t = d_87(t);
    h_10 = t;
    return(t);
  }
  t = fetch_1_0(b_11, t);
  t = not_null(h_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_37), term_v_37), term_r_37), term_n_37), term_k_37), term_g_37), term_c_37), term_y_36), term_u_36), term_q_36), term_m_36), term_i_36), term_e_36), term_a_36), term_w_35), term_s_35), term_o_35), term_l_35), term_h_35), term_d_35), term_z_34), term_v_34), term_r_34), term_n_34), term_j_34), term_f_34), term_c_34), term_z_33);
        {
          ATerm c_11 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm a_38 = ATgetArgument(t, 0);
                if((i_10 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm b_38 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(c_11, t);
        }
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  {
    ATerm f_11 (ATerm t)
    {
      ATerm s_10 = NULL,t_10 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm c_38 = ATgetArgument(t, 0);
          s_10 = ATgetArgument(t, 1);
          {
            ATerm d_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_10;
      {
        ATerm e_38 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_38;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        t_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_10), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(ATinsert(ATempty, t_10), term_f_38));
      }
      return(t);
    }
    t = try_1_0(f_11, t);
    t = j_10;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL;
  w_10 = t;
  t = fork_0_0(t);
  x_10 = t;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_10;
        t = b_102(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = (ATerm) ATmakeAppl(sym__2, x_10, w_10);
        t = c_102(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  ATerm g_11 (ATerm t)
  {
    ATerm d_11 = NULL;
    if(match_cons(t, sym__2))
      {
        d_11 = ATgetArgument(t, 0);
        a_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(d_11);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm i_38 = ATgetArgument(t, 0);
        if(((ATgetType(i_38) != AT_INT) || (ATgetInt((ATermInt) i_38) != 0)))
          _fail(t);
        {
          ATerm j_38 = ATgetArgument(t, 1);
        }
        {
          ATerm k_38 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = a_11;
    return(t);
  }
  t = fork_2_0(d_102, g_11, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm e_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_11 (ATerm t)
    {
      t = SSL_execvp(e_11, i_11);
      return(t);
    }
    t = fork_and_wait_1_0(h_11, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  t = y_108(t);
  t = xtc_find_warning_0_0(t);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_11, j_11);
  t = call_0_0(t);
  t = j_11;
  return(t);
}
ATerm assert_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_97(t);
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_11, l_11, o_11);
  t = table_push_0_0(t);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_11 = ATgetFirst((ATermList) t);
        t_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_11), (ATerm) ATinsert(CheckATermList(q_11), l_11)));
    t = (ATerm) ATmakeAppl(sym__2, l_11, o_11);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = z_98(t);
  {
    ATerm m_11 (ATerm t)
    {
      t = term_n_38;
      return(t);
    }
    t = debug_1_0(m_11, t);
    t = u_11;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm b_13 (ATerm f_12, ATerm t)
  {
    t = f_12;
    {
      ATerm o_38 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_38 = ATgetArgument(t, 0);
              ATerm q_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_38;
        }
      {
        ATerm n_11 (ATerm t)
        {
          t = term_r_38;
          return(t);
        }
        t = obsolete_1_0(n_11, t);
        t = (ATerm) ATmakeAppl(sym__2, f_12, term_p_33);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm c_13 (ATerm j_12, ATerm k_12, ATerm p_12, ATerm t)
  {
    t = SSL_open_file(j_12, k_12);
    return(t);
  }
  ATerm v_12 = NULL,w_12 = NULL,a_13 = NULL;
  v_12 = t;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_13(v_12, t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = c_13(w_12, a_13, v_12, t);
          }
      }
    }
  else
    {
      t = b_13(v_12, t);
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
  ATerm d_13 = NULL;
  t = term_f_32;
  t = new_0_0(t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, term_u_38);
  t = conc_strings_0_0(t);
  {
    ATerm r_11 (ATerm t)
    {
      ATerm o_4 = NULL;
      o_4 = t;
      t = SSL_access(o_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(r_11, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = new_file_0_0(t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_13, term_p_33);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_13, term_f_32);
  {
    ATerm s_11 (ATerm t)
    {
      t = term_m_32;
      return(t);
    }
    t = assert_1_0(s_11, t);
    t = h_13;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_4 = NULL,u_4 = NULL;
      t = t_13;
      t = xtc_new_file_0_0(t);
      s_4 = t;
      t = n_0(t);
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATinsert(ATinsert(ATempty, s_4), term_d_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(s_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_4);
    }
  else
    {
      ATerm f_5 = NULL,h_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_13;
      t = xtc_new_file_0_0(t);
      f_5 = t;
      t = n_0(t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_5), term_d_27), u_13), term_v_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(f_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_14);
  x_13 = t;
  t = y_13;
  t = i_71(t);
  z_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, z_13), x_13);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(z_38);
        }
      else
        {
          t = y_38;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_38);
      t = xtc_transform_file_2_0(a_109, b_109, t);
    }
  else
    {
      t = w_38;
      t = xtc_transform_term_2_0(a_109, b_109, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm d_14 = NULL,e_14 = NULL;
    d_14 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    e_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_14, term_y_30);
    t = geq_0_0(t);
    t = d_14;
    t = l_100(t);
    return(t);
  }
  t = try_1_0(v_11, t);
  return(t);
}
ATerm basename_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  t = SSL_explode_string(f_14);
  {
    ATerm w_11 (ATerm t)
    {
      ATerm a_39 = t;
      int b_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, w_11, t);
          ;
          LocalPopChoice(b_39);
        }
      else
        {
          t = a_39;
          {
            ATerm c_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(x_11, _id, t);
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                {
                  ATerm y_11 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(y_11, o_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(w_11, t);
    g_14 = t;
    t = SSL_implode_string(g_14);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      i_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14;
  t = basename_0_0(t);
  j_14 = t;
  {
    ATerm z_11 (ATerm t)
    {
      ATerm a_12 (ATerm t)
      {
        t = term_e_39;
        return(t);
      }
      t = debug_1_0(a_12, t);
      return(t);
    }
    t = if_verbose3_1_0(z_11, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), j_14);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, term_g_39, j_14);
    {
      ATerm h_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_27;
          t = get_config_0_0(t);
          t = basename_0_0(t);
          ;
          LocalPopChoice(i_39);
        }
      else
        {
          t = h_39;
          t = j_14;
        }
      k_14 = t;
      {
        ATerm b_12 (ATerm t)
        {
          ATerm c_12 (ATerm t)
          {
            t = term_j_39;
            return(t);
          }
          t = debug_1_0(c_12, t);
          return(t);
        }
        t = if_verbose3_1_0(b_12, t);
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), k_14);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_14);
      }
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm d_12 (ATerm t)
    {
      t = term_k_39;
      return(t);
    }
    ATerm e_12 (ATerm t)
    {
      ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,p_14 = NULL,r_14 = NULL;
      l_14 = t;
      t = dep_name_0_0(t);
      m_14 = t;
      t = l_14;
      t = pass_verbose_0_0(t);
      n_14 = t;
      t = l_14;
      t = pass_keep_0_0(t);
      p_14 = t;
      t = term_l_39;
      t = get_config_0_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_14), n_14), r_14), m_14);
      t = concat_0_0(t);
      return(t);
    }
    t = xtc_transform_2_0(d_12, e_12, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm h_12 (ATerm t)
    {
      t = term_m_39;
      return(t);
    }
    t = debug_1_0(h_12, t);
    return(t);
  }
  t = if_verbose2_1_0(g_12, t);
  {
    ATerm i_12 (ATerm t)
    {
      ATerm m_12 (ATerm t)
      {
        ATerm s_14 = NULL;
        s_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(s_14), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(CheckATermList(s_14), term_n_39));
        return(t);
      }
      t = if_verbose1_1_0(m_12, t);
      return(t);
    }
    ATerm l_12 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      t = repair_types_0_0(t);
      t = frontend_0_0(t);
      t = output_frontend_0_0(t);
      t = extract_0_0(t);
      t = warnings_0_0(t);
      t = stratego_nf_0_0(t);
      t = rename_defs_0_0(t);
      return(t);
    }
    t = profile_p__2_0(i_12, l_12, t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            ATerm r_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_14, w_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_39 = ATgetFirst((ATermList) t);
            e_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_6;
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
    x_14 = t;
    t = SSL_table_put(v_14, w_14, x_14);
    t = (ATerm) ATmakeAppl(sym__2, v_14, w_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  e_15 = t;
  t = k_97(t);
  f_15 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_15 = ATgetFirst((ATermList) t);
        g_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_15, (ATerm)ATmakeAppl(sym_Scopes_0), g_15);
    t = h_15;
    {
      ATerm n_12 (ATerm t)
      {
        ATerm i_15 = NULL;
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_15, i_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_12, t);
      t = e_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_79(t);
      t = v_79(t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      t = v_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  t = j_97(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_15, term_x_39);
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            ATerm b_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATempty;
      }
    n_15 = t;
    t = SSL_table_put(m_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_15), (ATerm) ATempty));
    t = l_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm s_15 = NULL;
  ATerm o_12 (ATerm t)
  {
    t = term_m_32;
    return(t);
  }
  t = begin_scope_1_0(o_12, t);
  {
    ATerm q_12 (ATerm t)
    {
      ATerm t_15 = NULL;
      t_15 = t;
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(d_40);
          }
        else
          {
            t = c_40;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_15 = ATgetFirst((ATermList) t);
            {
              ATerm e_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_15;
        {
          ATerm r_12 (ATerm t)
          {
            ATerm s_12 (ATerm t)
            {
              ATerm u_15 = NULL;
              u_15 = t;
              t = SSL_remove(u_15);
              return(t);
            }
            t = try_1_0(s_12, t);
            return(t);
          }
          t = map_1_0(r_12, t);
          t = t_15;
          {
            ATerm t_12 (ATerm t)
            {
              t = term_m_32;
              return(t);
            }
            t = end_scope_1_0(t_12, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(k_108, q_12, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL;
        t = term_v_38;
        t = get_config_0_0(t);
        v_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_15);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = term_h_40;
      }
    t = n_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_12, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(x_12, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL;
    w_15 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    x_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_15, term_q_30);
    t = geq_0_0(t);
    t = w_15;
    t = j_100(t);
    return(t);
  }
  t = try_1_0(y_12, t);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(match_cons(i_40, sym__4))
        {
          c_16 = ATgetArgument(i_40, 0);
          d_16 = ATgetArgument(i_40, 1);
          e_16 = ATgetArgument(i_40, 2);
          f_16 = ATgetArgument(i_40, 3);
        }
      else
        _fail(t);
      {
        ATerm j_40 = ATgetArgument(t, 1);
        if(match_cons(j_40, sym__4))
          {
            g_16 = ATgetArgument(j_40, 0);
            h_16 = ATgetArgument(j_40, 1);
            i_16 = ATgetArgument(j_40, 2);
            j_16 = ATgetArgument(j_40, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_16, g_16);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(c_16, g_16);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = SSL_subtr(c_16, g_16);
      }
    k_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, h_16);
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(d_16, h_16);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          t = SSL_subtr(d_16, h_16);
        }
      l_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, i_16);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(e_16, i_16);
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = SSL_subtr(e_16, i_16);
          }
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_16, j_16);
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(f_16, j_16);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              t = SSL_subtr(f_16, j_16);
            }
          n_16 = t;
          t = (ATerm) ATmakeAppl(sym__4, k_16, l_16, m_16, n_16);
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
ATerm profile_p__2_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,k_6 = NULL,l_6 = NULL,o_6 = NULL,p_6 = NULL;
  p_16 = t;
  t = times_0_0(t);
  q_16 = t;
  t = p_16;
  t = e_104(t);
  r_16 = t;
  t = times_0_0(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, q_16);
  t = diff_times_0_0(t);
  t_16 = t;
  if(match_cons(t, sym__4))
    {
      k_6 = ATgetArgument(t, 0);
      {
        ATerm s_40 = ATgetArgument(t, 1);
      }
      l_6 = ATgetArgument(t, 2);
      {
        ATerm t_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_6, l_6);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = SSL_addr(k_6, l_6);
      }
    v_16 = t;
    t = SSL_TicksToSeconds(v_16);
    u_16 = t;
    t = t_16;
    if(match_cons(t, sym__4))
      {
        ATerm w_40 = ATgetArgument(t, 0);
        o_6 = ATgetArgument(t, 1);
        {
          ATerm x_40 = ATgetArgument(t, 2);
        }
        p_6 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_6, p_6);
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(o_6, p_6);
          ;
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          t = SSL_addr(o_6, p_6);
        }
      x_16 = t;
      t = SSL_TicksToSeconds(x_16);
      w_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_16), term_b_41), u_16), term_a_41);
      t = d_104(t);
      t = r_16;
    }
  }
  return(t);
}
ATerm debug_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  t = s_98(t);
  z_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_16), z_16));
  t = y_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = SSL_is_string(f_17);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(z_12, t);
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
              j_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_17 = ATgetArgument(t, 0);
                  t = k_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_17 = ATgetArgument(t, 0);
                      t = k_17;
                      {
                        ATerm g_41 = t;
                        int h_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_41);
                          }
                        else
                          {
                            t = g_41;
                            {
                              ATerm e_13 (ATerm t)
                              {
                                t = term_i_41;
                                return(t);
                              }
                              t = debug_1_0(e_13, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_17 = NULL,s_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_17 = ATgetArgument(t, 0);
                          l_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_17;
                      t = eval_config_0_0(t);
                      r_17 = t;
                      t = l_17;
                      t = eval_config_0_0(t);
                      s_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
                      t = conc_strings_0_0(t);
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
  ATerm v_17 = NULL;
  v_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_17);
  {
    ATerm g_13 (ATerm t)
    {
      ATerm w_17 = NULL;
      t = eval_config_0_0(t);
      w_17 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_17, w_17);
      t = w_17;
      return(t);
    }
    t = try_1_0(g_13, t);
  }
  return(t);
}
ATerm strc_announce_0_0 (ATerm t)
{
  t = if_verbose2_1_0(strc_version_0_0, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  x_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), x_17);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_17;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = term_j_41;
  t = get_config_0_0(t);
  a_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), a_18), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
  t = z_17;
  return(t);
}
ATerm try_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_79(t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  t = SSL_table_keys(b_18);
  {
    ATerm i_13 (ATerm t)
    {
      ATerm c_18 = NULL,d_18 = NULL;
      c_18 = t;
      t = SSL_table_get(b_18, c_18);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_18, d_18);
      return(t);
    }
    t = map_1_0(i_13, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm e_18 = NULL,f_18 = NULL;
    e_18 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    f_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_18, term_a_31);
    t = geq_0_0(t);
    t = e_18;
    t = n_100(t);
    return(t);
  }
  t = try_1_0(j_13, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_18));
  {
    ATerm k_13 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((k_18 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          l_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(k_13, t);
    t = not_null(l_18);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 (ATerm t)
            {
              t = filter_1_0(v_93, t);
              return(t);
            }
            t = Cons_2_0(v_93, l_13, t);
            ;
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            {
              ATerm p_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_41 = ATgetFirst((ATermList) t);
                  p_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_18;
              t = filter_1_0(v_93, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm m_13 (ATerm t)
    {
      t = b_80(t);
      t = r_18(t);
      return(t);
    }
    t = try_1_0(m_13, t);
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm n_13 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm r_41 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_41;
          }
      }
      return(t);
    }
    t = repeat_1_0(n_13, t);
    t = s_18;
  }
  return(t);
}
ATerm say_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,c_7 = NULL;
  u_18 = t;
  t = w_98(t);
  c_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_7));
  t = u_18;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL;
    v_18 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    w_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_18, term_f_31);
    t = geq_0_0(t);
    t = v_18;
    t = m_100(t);
    return(t);
  }
  t = try_1_0(o_13, t);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_19;
        if((g_19 != t))
          {
            _fail(t);
          }
        t = f_19;
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = f_19;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_19, h_19);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = SSL_gtr(g_19, h_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL;
    k_19 = t;
    t = term_u_26;
    t = get_config_0_0(t);
    l_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_19, term_h_34);
    t = geq_0_0(t);
    t = k_19;
    t = o_100(t);
    return(t);
  }
  t = try_1_0(p_13, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_19 = ATgetFirst((ATermList) t);
      r_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_90(t);
  {
    ATerm q_13 (ATerm t)
    {
      ATerm s_19 = NULL;
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_19, s_19);
      t = y_90(t);
      return(t);
    }
    t = fetch_1_0(q_13, t);
    t = r_19;
  }
  return(t);
}
ATerm union_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      u_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_19;
  {
    ATerm v_19 (ATerm t)
    {
      ATerm w_41 = t;
      int x_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_19;
          ;
          LocalPopChoice(x_41);
        }
      else
        {
          t = w_41;
          {
            ATerm y_41 = t;
            int z_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_13 (ATerm t)
                {
                  t = t_19;
                  return(t);
                }
                t = HdMember_p__2_0(u_90, r_13, t);
                t = v_19(t);
                ;
                LocalPopChoice(z_41);
              }
            else
              {
                t = y_41;
                t = Cons_2_0(_id, v_19, t);
              }
          }
        }
      return(t);
    }
    t = v_19(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm w_19 = NULL;
    if(match_cons(t, sym__2))
      {
        w_19 = ATgetArgument(t, 0);
        if((w_19 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(s_13, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm z_19 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__3))
    {
      z_19 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      d_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, c_20);
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            ATerm d_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_19, c_20);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = (ATerm) ATempty;
      }
    e_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_20, d_20);
    t = union_0_0(t);
    f_20 = t;
    t = SSL_table_put(z_19, c_20, f_20);
    t = (ATerm) ATmakeAppl(sym__3, z_19, c_20, d_20);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_20;
  {
    ATerm v_13 (ATerm t)
    {
      ATerm n_20 = NULL,o_20 = NULL;
      if(match_cons(t, sym__2))
        {
          n_20 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, l_20, n_20, o_20);
      t = m_105(t);
      return(t);
    }
    t = map_1_0(v_13, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_21 (ATerm c_21, ATerm t)
  {
    t = SSL_fclose(c_21);
    return(t);
  }
  ATerm g_21 = NULL,h_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_21 = ATgetArgument(t, 0);
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_21);
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            t = m_21(h_21, t);
          }
      }
    }
  else
    {
      t = m_21(h_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_stdin_stream();
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stdout_stream();
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = SSL_stderr_stream();
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      ATerm h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL,p_9 = NULL;
        n_9 = t;
        t = SSL_explode_term(n_9);
        if(match_cons(t, sym__2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_42 = ATgetArgument(t, 1);
              if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
                {
                  p_9 = ATgetFirst((ATermList) l_42);
                  {
                    ATerm m_42 = (ATerm) ATgetNext((ATermList) l_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_9;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        {
          ATerm n_42 = t;
          int o_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
              ATerm w_13 (ATerm t)
              {
                ATerm y_21 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    y_21 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_21;
                return(t);
              }
              t = _2_0(w_13, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_21 = ATgetArgument(t, 0);
                  w_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(v_21, w_21);
              x_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, x_21);
              ;
              LocalPopChoice(o_42);
            }
          else
            {
              t = n_42;
              {
                ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                ATerm b_14 (ATerm t)
                {
                  ATerm c_22 = NULL;
                  c_22 = t;
                  t = SSL_is_string(c_22);
                  return(t);
                }
                t = _2_0(b_14, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_21 = ATgetArgument(t, 0);
                    a_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_21, a_22);
                b_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL;
      g_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_22, term_r_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm c_14 (ATerm t)
        {
          t = term_s_42;
          return(t);
        }
        t = debug_1_0(c_14, t);
        _fail(t);
      }
    }
  d_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_22);
  e_22 = t;
  t = d_22;
  t = fclose_0_0(t);
  t = e_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_9 = NULL;
      t_9 = t;
      t = SSL_access(t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(u_42);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_42;
      {
        ATerm v_42 = t;
        int w_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_42 = t;
            if((PushChoice() == 0))
              {
                ATerm e_10 = NULL;
                e_10 = t;
                t = SSL_access(e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_42;
              }
            {
              ATerm o_14 (ATerm t)
              {
                t = term_y_42;
                return(t);
              }
              t = debug_1_0(o_14, t);
            }
            ;
            LocalPopChoice(w_42);
          }
        else
          {
            t = v_42;
            {
              ATerm q_14 (ATerm t)
              {
                t = term_z_42;
                return(t);
              }
              t = debug_1_0(q_14, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  {
    ATerm t_14 (ATerm t)
    {
      ATerm u_14 (ATerm t)
      {
        t = term_a_43;
        return(t);
      }
      t = debug_1_0(u_14, t);
      return(t);
    }
    t = if_verbose5_1_0(t_14, t);
    {
      ATerm b_43 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, j_22));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_43;
        }
      k_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, j_22));
      t = k_22;
      {
        ATerm y_14 (ATerm t)
        {
          ATerm z_14 (ATerm t)
          {
            t = term_c_43;
            return(t);
          }
          t = debug_1_0(z_14, t);
          return(t);
        }
        t = if_verbose4_1_0(y_14, t);
        t = read_repository_file_0_0(t);
        {
          ATerm a_15 (ATerm t)
          {
            ATerm b_15 (ATerm t)
            {
              t = term_d_43;
              return(t);
            }
            t = say_1_0(b_15, t);
            return(t);
          }
          t = if_verbose6_1_0(a_15, t);
          l_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_43, l_22);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm c_15 (ATerm t)
            {
              ATerm d_15 (ATerm t)
              {
                t = term_f_43;
                return(t);
              }
              t = say_1_0(d_15, t);
              return(t);
            }
            t = if_verbose6_1_0(c_15, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, j_22), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_e_43, (ATerm)ATmakeAppl(sym_Imported_1, j_22), (ATerm) ATempty);
            {
              ATerm j_15 (ATerm t)
              {
                ATerm k_15 (ATerm t)
                {
                  t = term_d_43;
                  return(t);
                }
                t = say_1_0(k_15, t);
                return(t);
              }
              t = if_verbose4_1_0(j_15, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_43);
    }
  else
    {
      t = g_43;
      {
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  ATerm o_15 (ATerm t)
  {
    ATerm p_15 (ATerm t)
    {
      t = term_l_43;
      return(t);
    }
    t = debug_1_0(p_15, t);
    return(t);
  }
  t = if_verbose5_1_0(o_15, t);
  m_22 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = m_22;
    {
      ATerm q_15 (ATerm t)
      {
        ATerm r_15 (ATerm t)
        {
          t = term_o_43;
          return(t);
        }
        t = debug_1_0(r_15, t);
        return(t);
      }
      t = if_verbose5_1_0(q_15, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_15 (ATerm t)
      {
        ATerm z_15 (ATerm t)
        {
          t = term_r_43;
          return(t);
        }
        t = debug_1_0(z_15, t);
        return(t);
      }
      t = if_verbose5_1_0(y_15, t);
      t = xtc_load_0_0(t);
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            {
              ATerm k_10 = NULL,l_10 = NULL;
              k_10 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_10));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_43 = ATgetFirst((ATermList) t);
                  if(match_cons(u_43, sym__2))
                    {
                      ATerm w_43 = ATgetArgument(u_43, 0);
                      l_10 = ATgetArgument(u_43, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_10;
            }
          }
        {
          ATerm a_16 (ATerm t)
          {
            ATerm b_16 (ATerm t)
            {
              t = term_r_43;
              return(t);
            }
            t = debug_1_0(b_16, t);
            return(t);
          }
          t = if_verbose5_1_0(a_16, t);
        }
      }
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm n_22 = NULL;
        n_22 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), n_22), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_43), n_22), term_x_43);
        {
          ATerm o_16 (ATerm t)
          {
            t = term_e_43;
            t = table_getlist_0_0(t);
            {
              ATerm a_17 (ATerm t)
              {
                t = term_z_43;
                return(t);
              }
              t = debug_1_0(a_17, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(o_16, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_22;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = (ATerm) ATempty;
      }
    r_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
    t = conc_0_0(t);
    s_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_22, s_22);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, p_22, s_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  v_22 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_22;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm d_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_22 = ATgetFirst((ATermList) t);
          x_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_22 = ATgetFirst((ATermList) t);
          z_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_22;
      t = j_0(t);
      t = y_22;
      t = k_0(t);
      d_23 = t;
      t = (ATerm) ATinsert(CheckATermList(z_22), d_23);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_23;
        t = get_config_0_0(t);
        t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_23);
        t = (ATerm) ATmakeAppl(sym__2, term_f_39, e_23);
        ;
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_23, f_23);
        t = (ATerm) ATmakeAppl(sym__3, term_f_39, e_23, f_23);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_23;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATempty;
      }
    i_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_23, h_23);
    t = conc_0_0(t);
    j_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_23, j_23);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, g_23, j_23);
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_17 (ATerm t)
      {
        ATerm r_23 = NULL;
        r_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_23);
        t = term_f_32;
        return(t);
      }
      ATerm d_17 (ATerm t)
      {
        t = term_i_44;
        return(t);
      }
      t = ArgOption_3_0(b_17, c_17, d_17, t);
      ;
      LocalPopChoice(h_44);
    }
  else
    {
      t = g_44;
      {
        ATerm j_44 = t;
        int k_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 (ATerm t)
            {
              ATerm s_23 = NULL;
              s_23 = t;
              if(match_string(t, "-o"))
                {
                  t = s_23;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
                    _fail(t);
                  t = s_23;
                }
              return(t);
            }
            ATerm g_17 (ATerm t)
            {
              ATerm t_23 = NULL;
              t_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_23);
              t = term_f_32;
              return(t);
            }
            ATerm h_17 (ATerm t)
            {
              t = term_l_44;
              return(t);
            }
            t = ArgOption_3_0(e_17, g_17, h_17, t);
            ;
            LocalPopChoice(k_44);
          }
        else
          {
            t = j_44;
            {
              ATerm m_44 = t;
              int n_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_17 (ATerm t)
                  {
                    ATerm u_23 = NULL;
                    u_23 = t;
                    if(match_string(t, "-I"))
                      {
                        t = u_23;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
                          _fail(t);
                        t = u_23;
                      }
                    return(t);
                  }
                  ATerm m_17 (ATerm t)
                  {
                    ATerm v_23 = NULL;
                    v_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_l_39, (ATerm) ATinsert(ATinsert(ATempty, v_23), term_l_39));
                    t = extend_config_0_0(t);
                    t = term_f_32;
                    return(t);
                  }
                  ATerm n_17 (ATerm t)
                  {
                    t = term_o_44;
                    return(t);
                  }
                  t = ArgOption_3_0(i_17, m_17, n_17, t);
                  ;
                  LocalPopChoice(n_44);
                }
              else
                {
                  t = m_44;
                  {
                    ATerm p_44 = t;
                    int q_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_17 (ATerm t)
                        {
                          ATerm w_23 = NULL;
                          w_23 = t;
                          if(match_string(t, "--main"))
                            {
                              t = w_23;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
                                _fail(t);
                              t = w_23;
                            }
                          return(t);
                        }
                        ATerm p_17 (ATerm t)
                        {
                          ATerm x_23 = NULL;
                          x_23 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), x_23);
                          t = term_f_32;
                          return(t);
                        }
                        ATerm q_17 (ATerm t)
                        {
                          t = term_r_44;
                          return(t);
                        }
                        t = ArgOption_3_0(o_17, p_17, q_17, t);
                        ;
                        LocalPopChoice(q_44);
                      }
                    else
                      {
                        t = p_44;
                        {
                          ATerm s_44 = t;
                          int t_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_17 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_17 (ATerm t)
                              {
                                ATerm y_23 = NULL;
                                y_23 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_i_28, (ATerm) ATinsert(ATempty, y_23));
                                t = post_extend_config_0_0(t);
                                t = term_f_32;
                                return(t);
                              }
                              ATerm y_17 (ATerm t)
                              {
                                t = term_u_44;
                                return(t);
                              }
                              t = ArgOption_3_0(t_17, u_17, y_17, t);
                              ;
                              LocalPopChoice(t_44);
                            }
                          else
                            {
                              t = s_44;
                              {
                                ATerm v_44 = t;
                                int w_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_18 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_18 (ATerm t)
                                    {
                                      ATerm z_23 = NULL;
                                      z_23 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_n_27, (ATerm) ATinsert(ATempty, z_23));
                                      t = extend_config_0_0(t);
                                      t = term_f_32;
                                      return(t);
                                    }
                                    ATerm i_18 (ATerm t)
                                    {
                                      t = term_x_44;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(g_18, h_18, i_18, t);
                                    ;
                                    LocalPopChoice(w_44);
                                  }
                                else
                                  {
                                    t = v_44;
                                    {
                                      ATerm y_44 = t;
                                      int z_44 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_18 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_18 (ATerm t)
                                          {
                                            ATerm a_24 = NULL;
                                            a_24 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATinsert(ATempty, a_24));
                                            t = extend_config_0_0(t);
                                            t = term_f_32;
                                            return(t);
                                          }
                                          ATerm o_18 (ATerm t)
                                          {
                                            t = term_a_45;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(m_18, n_18, o_18, t);
                                          ;
                                          LocalPopChoice(z_44);
                                        }
                                      else
                                        {
                                          t = y_44;
                                          {
                                            ATerm b_45 = t;
                                            int c_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_18 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm t_18 (ATerm t)
                                                {
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = term_f_32;
                                                  return(t);
                                                }
                                                ATerm x_18 (ATerm t)
                                                {
                                                  t = term_d_45;
                                                  return(t);
                                                }
                                                t = Option_3_0(q_18, t_18, x_18, t);
                                                ;
                                                LocalPopChoice(c_45);
                                              }
                                            else
                                              {
                                                t = b_45;
                                                {
                                                  ATerm e_45 = t;
                                                  int f_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_18 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm z_18 (ATerm t)
                                                      {
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = term_f_32;
                                                        return(t);
                                                      }
                                                      ATerm a_19 (ATerm t)
                                                      {
                                                        t = term_g_45;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(y_18, z_18, a_19, t);
                                                      ;
                                                      LocalPopChoice(f_45);
                                                    }
                                                  else
                                                    {
                                                      t = e_45;
                                                      {
                                                        ATerm h_45 = t;
                                                        int i_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_19 (ATerm t)
                                                            {
                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm c_19 (ATerm t)
                                                            {
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = term_f_32;
                                                              return(t);
                                                            }
                                                            ATerm d_19 (ATerm t)
                                                            {
                                                              t = term_j_45;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(b_19, c_19, d_19, t);
                                                            ;
                                                            LocalPopChoice(i_45);
                                                          }
                                                        else
                                                          {
                                                            t = h_45;
                                                            {
                                                              ATerm k_45 = t;
                                                              int l_45 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_19 (ATerm t)
                                                                  {
                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output-optimized", 0, ATtrue)))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm i_19 (ATerm t)
                                                                  {
                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                    t = term_f_32;
                                                                    return(t);
                                                                  }
                                                                  ATerm j_19 (ATerm t)
                                                                  {
                                                                    t = term_m_45;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3_0(e_19, i_19, j_19, t);
                                                                  ;
                                                                  LocalPopChoice(l_45);
                                                                }
                                                              else
                                                                {
                                                                  t = k_45;
                                                                  {
                                                                    ATerm n_45 = t;
                                                                    int o_45 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm m_19 (ATerm t)
                                                                        {
                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output-canonical", 0, ATtrue)))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm n_19 (ATerm t)
                                                                        {
                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                          t = term_f_32;
                                                                          return(t);
                                                                        }
                                                                        ATerm o_19 (ATerm t)
                                                                        {
                                                                          t = term_p_45;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3_0(m_19, n_19, o_19, t);
                                                                        ;
                                                                        LocalPopChoice(o_45);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_45;
                                                                        {
                                                                          ATerm q_45 = t;
                                                                          int r_45 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm p_19 (ATerm t)
                                                                              {
                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm x_19 (ATerm t)
                                                                              {
                                                                                ATerm b_24 = NULL,c_24 = NULL;
                                                                                b_24 = t;
                                                                                t = SSL_string_to_int(b_24);
                                                                                c_24 = t;
                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_24);
                                                                                t = term_f_32;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_19 (ATerm t)
                                                                              {
                                                                                t = term_s_45;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3_0(p_19, x_19, y_19, t);
                                                                              ;
                                                                              LocalPopChoice(r_45);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_45;
                                                                              {
                                                                                ATerm t_45 = t;
                                                                                int u_45 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_20 (ATerm t)
                                                                                    {
                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_20 (ATerm t)
                                                                                    {
                                                                                      ATerm d_24 = NULL,e_24 = NULL;
                                                                                      d_24 = t;
                                                                                      t = SSL_string_to_int(d_24);
                                                                                      e_24 = t;
                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), e_24);
                                                                                      t = term_f_32;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_20 (ATerm t)
                                                                                    {
                                                                                      t = term_v_45;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3_0(a_20, b_20, h_20, t);
                                                                                    ;
                                                                                    LocalPopChoice(u_45);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_45;
                                                                                    {
                                                                                      ATerm w_45 = t;
                                                                                      int x_45 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_20 (ATerm t)
                                                                                          {
                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm j_20 (ATerm t)
                                                                                          {
                                                                                            t = term_y_45;
                                                                                            t = toggle_config_0_0(t);
                                                                                            t = term_f_32;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm k_20 (ATerm t)
                                                                                          {
                                                                                            t = term_z_45;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3_0(i_20, j_20, k_20, t);
                                                                                          ;
                                                                                          LocalPopChoice(x_45);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_45;
                                                                                          {
                                                                                            ATerm a_46 = t;
                                                                                            int b_46 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm m_20 (ATerm t)
                                                                                                {
                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
                                                                                                    _fail(t);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm p_20 (ATerm t)
                                                                                                {
                                                                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                  t = term_f_32;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_20 (ATerm t)
                                                                                                {
                                                                                                  t = term_c_46;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3_0(m_20, p_20, q_20, t);
                                                                                                ;
                                                                                                LocalPopChoice(b_46);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_46;
                                                                                                {
                                                                                                  ATerm d_46 = t;
                                                                                                  int e_46 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm r_20 (ATerm t)
                                                                                                      {
                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                                                                                          _fail(t);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm s_20 (ATerm t)
                                                                                                      {
                                                                                                        ATerm f_24 = NULL;
                                                                                                        f_24 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_f_46, (ATerm) ATinsert(ATempty, f_24));
                                                                                                        t = extend_config_0_0(t);
                                                                                                        t = term_f_32;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm t_20 (ATerm t)
                                                                                                      {
                                                                                                        t = term_g_46;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3_0(r_20, s_20, t_20, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(e_46);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_46;
                                                                                                      {
                                                                                                        ATerm h_46 = t;
                                                                                                        int i_46 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_20 (ATerm t)
                                                                                                            {
                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                                                                _fail(t);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm v_20 (ATerm t)
                                                                                                            {
                                                                                                              ATerm g_24 = NULL,h_24 = NULL;
                                                                                                              g_24 = t;
                                                                                                              t = SSL_string_to_int(g_24);
                                                                                                              h_24 = t;
                                                                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_24);
                                                                                                              t = term_f_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm w_20 (ATerm t)
                                                                                                            {
                                                                                                              t = term_j_46;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = ArgOption_3_0(u_20, v_20, w_20, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(i_46);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_46;
                                                                                                            {
                                                                                                              ATerm k_46 = t;
                                                                                                              int l_46 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm x_20 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm i_24 = NULL;
                                                                                                                    i_24 = t;
                                                                                                                    if(match_string(t, "-S"))
                                                                                                                      {
                                                                                                                        t = i_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
                                                                                                                          _fail(t);
                                                                                                                        t = i_24;
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm y_20 (ATerm t)
                                                                                                                  {
                                                                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                                                                                                                    t = term_f_32;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm z_20 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_m_46;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(x_20, y_20, z_20, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(l_46);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_46;
                                                                                                                  {
                                                                                                                    ATerm n_46 = t;
                                                                                                                    int o_46 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm a_21 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm j_24 = NULL;
                                                                                                                          j_24 = t;
                                                                                                                          if(match_string(t, "-h"))
                                                                                                                            {
                                                                                                                              t = j_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
                                                                                                                                _fail(t);
                                                                                                                              t = j_24;
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm b_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                          t = term_f_32;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm d_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_p_46;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(a_21, b_21, d_21, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(o_46);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = n_46;
                                                                                                                        {
                                                                                                                          ATerm q_46 = t;
                                                                                                                          int r_46 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_21 (ATerm t)
                                                                                                                              {
                                                                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
                                                                                                                                  _fail(t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm f_21 (ATerm t)
                                                                                                                              {
                                                                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                                t = term_f_32;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm i_21 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_s_46;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3_0(e_21, f_21, i_21, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_46);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_46;
                                                                                                                              {
                                                                                                                                ATerm t_46 = t;
                                                                                                                                int u_46 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm j_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm k_24 = NULL;
                                                                                                                                      k_24 = t;
                                                                                                                                      if(match_string(t, "-v"))
                                                                                                                                        {
                                                                                                                                          t = k_24;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
                                                                                                                                            _fail(t);
                                                                                                                                          t = k_24;
                                                                                                                                        }
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm k_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                                      t = term_f_32;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm l_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_v_46;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Option_3_0(j_21, k_21, l_21, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(u_46);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = t_46;
                                                                                                                                    {
                                                                                                                                      ATerm o_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm l_24 = NULL;
                                                                                                                                        l_24 = t;
                                                                                                                                        if(match_string(t, "--warning"))
                                                                                                                                          {
                                                                                                                                            t = l_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
                                                                                                                                              _fail(t);
                                                                                                                                            t = l_24;
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm r_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm m_24 = NULL;
                                                                                                                                        m_24 = t;
                                                                                                                                        {
                                                                                                                                          ATerm w_46 = t;
                                                                                                                                          int x_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = term_r_31;
                                                                                                                                              t = get_config_0_0(t);
                                                                                                                                              {
                                                                                                                                                ATerm u_21 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                                                                                                                                                    _fail(t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm h_22 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Cons_2_0(u_21, h_22, t);
                                                                                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, m_24));
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__3, term_f_39, term_r_31, (ATerm) ATinsert(ATempty, m_24));
                                                                                                                                              }
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(x_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = w_46;
                                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATempty, m_24));
                                                                                                                                              t = extend_config_0_0(t);
                                                                                                                                            }
                                                                                                                                          t = term_f_32;
                                                                                                                                        }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm t_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = term_y_46;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = ArgOption_3_0(o_21, r_21, t_21, t);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_47), term_i_47), term_l_47), term_k_47), term_j_47), term_i_47), term_h_47), term_g_47), term_f_47), term_e_47), term_d_47), term_c_47), term_b_47), term_a_47), term_z_46);
  return(t);
}
ATerm map_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm n_24 (ATerm t)
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        t = Cons_2_0(q_86, n_24, t);
      }
    return(t);
  }
  t = n_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_24 = ATgetFirst((ATermList) t);
      q_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_24 = NULL,x_24 = NULL;
        t = q_24;
        t = h_0(t);
        w_24 = t;
        t = p_24;
        t = g_0(t);
        x_24 = t;
        t = q_24;
        {
          ATerm i_22 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_24), x_24);
            return(t);
          }
          t = reverse_acc_2_0(g_0, i_22, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_32;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm o_22 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, o_22, t);
  return(t);
}
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  t = term_f_32;
  t = e_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), y_24), term_t_47), term_i_47), term_s_47), term_i_47), term_r_47), term_q_47), term_i_47), term_p_47);
  return(t);
}
ATerm Program_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  z_24 = t;
  t = a_25;
  t = e_71(t);
  b_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_25), z_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_25 = NULL;
  ATerm v_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_47;
      t = get_config_0_0(t);
      f_25 = t;
      ;
      LocalPopChoice(w_47);
    }
  else
    {
      t = v_47;
      {
        ATerm t_22 (ATerm t)
        {
          ATerm u_22 (ATerm t)
          {
            f_25 = t;
            return(t);
          }
          t = Program_1_0(u_22, t);
          return(t);
        }
        t = option_defined_1_0(t_22, t);
      }
    }
  {
    ATerm a_23 (ATerm t)
    {
      ATerm b_23 (ATerm t)
      {
        t = f_25;
        return(t);
      }
      t = short_description_1_0(b_23, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(a_23, t);
    t = term_y_47;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm c_23 (ATerm t)
      {
        ATerm g_25 = NULL;
        g_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_25), term_z_47);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(c_23, t);
      {
        ATerm k_23 (ATerm t)
        {
          ATerm h_25 = NULL;
          ATerm l_23 (ATerm t)
          {
            t = f_25;
            return(t);
          }
          t = long_description_1_0(l_23, t);
          h_25 = t;
          t = (ATerm) ATinsert(CheckATermList(h_25), term_i_47);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(k_23, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = f_71(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_25), i_25);
  return(t);
}
ATerm fetch_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm o_25 (ATerm t)
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_87, _id, t);
        ;
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        t = Cons_2_0(_id, o_25, t);
      }
    return(t);
  }
  t = o_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  t = fetch_1_0(g_104, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_48 = ATgetFirst((ATermList) t);
                ATerm f_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_25;
          }
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
        t = (ATerm) ATinsert(ATempty, q_25);
      }
    r_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_25);
    t = q_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_47;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_23 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_48;
        return(t);
      }
      ATerm o_23 (ATerm t)
      {
        t = term_k_48;
        return(t);
      }
      t = Option_3_0(m_23, n_23, o_23, t);
      ;
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      {
        ATerm p_23 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_23 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_48;
          return(t);
        }
        ATerm o_24 (ATerm t)
        {
          t = term_m_48;
          return(t);
        }
        t = Option_3_0(p_23, q_23, o_24, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL;
  if(match_cons(t, sym__3))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
      z_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_48 = ATgetArgument(t, 0);
            ATerm q_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_25, y_25);
        ;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = (ATerm) ATempty;
      }
    b_26 = t;
    t = SSL_table_put(x_25, y_25, (ATerm) ATinsert(CheckATermList(b_26), z_25));
    t = (ATerm) ATmakeAppl(sym__3, x_25, y_25, z_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm k_26 = NULL;
  t = term_f_32;
  t = l_105(t);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_48, term_s_48, k_26);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = m_26;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm r_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_26 = ATgetFirst((ATermList) t);
          o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      t = a_0(t);
      t = term_f_32;
      t = c_0(t);
      r_26 = t;
      t = (ATerm) ATinsert(CheckATermList(o_26), r_26);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_24 (ATerm t)
  {
    ATerm t_26 = NULL;
    t_26 = t;
    if(match_string(t, "--help"))
      {
        t = t_26;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = t_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = t_26;
          }
      }
    return(t);
  }
  ATerm s_24 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_t_48;
    return(t);
  }
  ATerm t_24 (ATerm t)
  {
    t = term_u_48;
    return(t);
  }
  t = Option_3_0(r_24, s_24, t_24, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  {
    ATerm u_24 (ATerm t)
    {
      t = term_v_48;
      t = j_105(t);
      return(t);
    }
    t = try_1_0(u_24, t);
    t = v_26;
    {
      ATerm v_24 (ATerm t)
      {
        ATerm w_26 = NULL;
        w_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_26);
        t = (ATerm) ATmakeAppl(sym_Program_1, w_26);
        return(t);
      }
      ATerm d_25 (ATerm t)
      {
        ATerm w_48 = t;
        int x_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_48 = t;
            int z_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_48);
              }
            else
              {
                t = y_48;
                t = j_105(t);
                t = Cons_2_0(_id, d_25, t);
              }
            ;
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            {
              ATerm y_26 = NULL,z_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_26 = ATgetFirst((ATermList) t);
                  z_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_26), (ATerm) ATmakeAppl(sym_Undefined_1, y_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_24, d_25, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_27;
  {
    ATerm e_25 (ATerm t)
    {
      ATerm a_49 = t;
      int b_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_105(t);
          ;
          LocalPopChoice(b_49);
        }
      else
        {
          t = a_49;
          {
            ATerm c_49 = t;
            int d_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(d_49);
              }
            else
              {
                t = c_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_25, t);
    {
      ATerm m_25 (ATerm t)
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = NULL;
            m_27 = t;
            {
              ATerm g_49 = t;
              int h_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_27;
                  {
                    ATerm i_49 = t;
                    int j_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_k_49;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_49);
                      }
                    else
                      {
                        t = i_49;
                        {
                          ATerm n_25 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(n_25, t);
                        }
                      }
                    t = m_27;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_49);
                }
              else
                {
                  t = g_49;
                  t = term_i_48;
                  t = get_config_0_0(t);
                  t = m_27;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            {
              ATerm p_25 (ATerm t)
              {
                ATerm s_25 (ATerm t)
                {
                  g_27 = t;
                  return(t);
                }
                t = Undefined_1_0(s_25, t);
                return(t);
              }
              t = option_defined_1_0(p_25, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_27)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_27)), term_l_49));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(m_25, t);
      h_27 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_27;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_49);
    }
  else
    {
      t = m_49;
      {
        ATerm x_27 = NULL,y_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_27 = ATgetFirst((ATermList) t);
            y_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_27;
        {
          ATerm t_25 (ATerm t)
          {
            t = y_27;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_25, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  j_28 = t;
  t = SSL_explode_term(j_28);
  if(match_cons(t, sym__2))
    {
      ATerm o_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_28;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm l_28 (ATerm t)
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_28, t);
        ;
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_87(t);
      }
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_28;
  {
    ATerm u_25 (ATerm t)
    {
      t = m_28;
      return(t);
    }
    t = at_end_1_0(u_25, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_49);
    }
  else
    {
      t = r_49;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  t_28 = t;
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_28);
  o_28 = t;
  t = p_28;
  t = f_64(t);
  r_28 = t;
  t = q_28;
  t = g_64(t);
  s_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_28, s_28), o_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_28 = NULL;
  ATerm v_25 (ATerm t)
  {
    ATerm x_28 = NULL;
    x_28 = t;
    t = SSL_explode_string(x_28);
    return(t);
  }
  ATerm w_25 (ATerm t)
  {
    ATerm y_28 = NULL;
    y_28 = t;
    t = SSL_explode_string(y_28);
    return(t);
  }
  t = _2_0(v_25, w_25, t);
  t = conc_0_0(t);
  w_28 = t;
  t = SSL_implode_string(w_28);
  return(t);
}
ATerm Cons_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  e_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_29 = ATgetFirst((ATermList) t);
      b_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  z_28 = t;
  t = a_29;
  t = o_65(t);
  c_29 = t;
  t = b_29;
  t = p_65(t);
  d_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_29), c_29), z_28);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  t = SSL_explode_string(h_29);
  {
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 (ATerm t)
        {
          ATerm v_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, j_29, t);
              ;
              LocalPopChoice(w_49);
            }
          else
            {
              t = v_49;
              {
                ATerm a_26 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm c_26 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(a_26, c_26, t);
              }
            }
          return(t);
        }
        t = j_29(t);
        ;
        LocalPopChoice(u_49);
      }
    else
      {
        t = t_49;
        t = (ATerm) ATempty;
      }
    i_29 = t;
    t = SSL_implode_string(i_29);
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
  ATerm k_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL,f_30 = NULL,g_30 = NULL;
  k_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(1));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_x_49;
  t = xtc_find_path_0_0(t);
  m_29 = t;
  t = term_y_49;
  t = xtc_find_path_0_0(t);
  n_29 = t;
  t = term_z_49;
  t = xtc_find_path_0_0(t);
  o_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), n_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), m_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_29, term_b_50);
  t = conc_strings_0_0(t);
  r_29 = t;
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_29, term_b_50);
  t = conc_strings_0_0(t);
  y_29 = t;
  t = term_c_50;
  t = xtc_find_path_0_0(t);
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_29, term_b_50);
  t = conc_strings_0_0(t);
  a_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), y_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), r_29), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, term_d_50);
  t = conc_strings_0_0(t);
  d_30 = t;
  t = term_c_50;
  t = xtc_find_path_0_0(t);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, term_d_50);
  t = conc_strings_0_0(t);
  g_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), g_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), d_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = k_29;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm d_26 (ATerm t)
    {
      ATerm h_30 = NULL;
      t = term_e_50;
      t = get_config_0_0(t);
      t = term_f_50;
      t = xtc_find_0_0(t);
      h_30 = t;
      t = SSL_copy(h_30, (ATerm) ATmakeAppl(sym_stdout_0));
      t = SSL_exit((ATerm) ATmakeInt(0));
      return(t);
    }
    t = try_1_0(d_26, t);
    {
      ATerm e_26 (ATerm t)
      {
        t = term_g_50;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(0));
        return(t);
      }
      t = try_1_0(e_26, t);
      {
        ATerm h_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_30 = NULL;
            i_30 = t;
            t = term_v_38;
            t = get_config_0_0(t);
            t = i_30;
            ;
            LocalPopChoice(i_50);
          }
        else
          {
            t = h_50;
            t = (ATerm) ATinsert(ATempty, term_j_50);
            t = fatal_error_0_0(t);
          }
        t = strc_announce_0_0(t);
        {
          ATerm f_26 (ATerm t)
          {
            ATerm k_30 = NULL;
            k_30 = t;
            t = term_v_38;
            t = get_config_0_0(t);
            {
              ATerm g_26 (ATerm t)
              {
                t = term_k_50;
                return(t);
              }
              t = debug_1_0(g_26, t);
              t = k_30;
            }
            return(t);
          }
          t = if_verbose1_1_0(f_26, t);
        }
      }
    }
  }
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm h_26 (ATerm t)
        {
          ATerm i_26 (ATerm t)
          {
            ATerm l_30 = NULL;
            l_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(l_30), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(CheckATermList(l_30), term_n_50));
            return(t);
          }
          t = if_verbose1_1_0(i_26, t);
          return(t);
        }
        t = profile_p__2_0(h_26, compile_0_0, t);
        {
          ATerm j_26 (ATerm t)
          {
            ATerm o_30 = NULL;
            t = run_time_0_0(t);
            o_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_50), o_30), term_o_50));
            return(t);
          }
          t = if_verbose2_1_0(j_26, t);
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
      {
        ATerm p_30 = NULL;
        t = run_time_0_0(t);
        p_30 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
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
