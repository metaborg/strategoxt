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
ATerm term_v_30;
ATerm term_o_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_a_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_u_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
void init_constant_terms (void)
{
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
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
  term_z_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_33, term_u_29, term_y_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_34, term_p_26, term_b_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_34, term_o_30, term_e_34);
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
ATerm foldr_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm output_canonical_0_0 (ATerm);
ATerm stratego_cf_0_0 (ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm output_optimized_0_0 (ATerm);
ATerm olevel1_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm stratego_of_0_0 (ATerm);
ATerm optimize2_0_0 (ATerm);
ATerm dead_var_elim_0_0 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm const_prop_0_0 (ATerm);
ATerm olevel3_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm olevel5_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm inline_0_0 (ATerm);
ATerm desugar_case_0_0 (ATerm);
ATerm olevel2_1_0 (ATerm g_109 (ATerm), ATerm);
ATerm compile_match_0_0 (ATerm);
ATerm olevel_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm);
ATerm olevel4_1_0 (ATerm i_109 (ATerm), ATerm);
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
ATerm if_keep2_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm repair_types_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm xtc_io_transform_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm add_main_0_0 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm dep_name_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm basename_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_96 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm xtc_input_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm compile_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm);
ATerm debug_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm strc_announce_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm try_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_100 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm d_100 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm union_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm b_105 (ATerm), ATerm);
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
ATerm map_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_70 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm v_103 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_104 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_86 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_92(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = l_13;
      {
        ATerm i_1 = NULL,j_1 = NULL,o_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_1 = ATgetFirst((ATermList) t);
            j_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_1;
        t = foldr_2_0(k_92, l_92, t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, o_1);
        t = l_92(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  p_1 = t;
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_1;
  t = foldr_2_0(d_96, e_96, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_1 = NULL;
  t = times_0_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_h_26;
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm s_1 = NULL,t_1 = NULL;
      if(match_cons(t, sym__2))
        {
          s_1 = ATgetArgument(t, 0);
          t_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_1, t_1);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = SSL_addr(s_1, t_1);
          }
      }
      return(t);
    }
    t = crush_2_0(c_0, p_0, t);
    r_1 = t;
    t = SSL_TicksToSeconds(r_1);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm u_1 = NULL,v_1 = NULL;
    u_1 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    v_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_1, term_p_26);
    t = geq_0_0(t);
    t = u_1;
    t = z_99(t);
    return(t);
  }
  t = try_1_0(s_0, t);
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      w_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = term_q_26;
        return(t);
      }
      t = say_1_0(u_0, t);
      return(t);
    }
    t = if_verbose2_1_0(t_0, t);
    {
      ATerm r_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_26;
          t = get_config_0_0(t);
          ;
          LocalPopChoice(t_26);
        }
      else
        {
          t = r_26;
          {
            ATerm v_0 (ATerm t)
            {
              t = term_y_26;
              return(t);
            }
            t = get_outfile_1_0(v_0, t);
          }
        }
      x_1 = t;
      t = term_a_27;
      t = get_config_0_0(t);
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_27, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_1), x_1), term_x_26), w_1));
      {
        ATerm w_0 (ATerm t)
        {
          ATerm e_0 = NULL;
          e_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_0));
          t = e_0;
          return(t);
        }
        t = if_verbose3_1_0(w_0, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
      }
    }
  }
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = term_f_27;
        return(t);
      }
      t = say_1_0(a_1, t);
      return(t);
    }
    t = if_verbose2_1_0(x_0, t);
    {
      ATerm b_1 (ATerm t)
      {
        t = term_i_27;
        return(t);
      }
      t = get_outfile_1_0(b_1, t);
      b_2 = t;
      t = term_j_27;
      t = get_config_0_0(t);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_x_26), z_1), term_k_27));
      t = conc_0_0(t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_27, d_2);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm r_0 = NULL;
          r_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_0));
          t = r_0;
          return(t);
        }
        t = if_verbose3_1_0(c_1, t);
        t = call_0_0(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
      }
    }
  }
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL;
      e_2 = t;
      t = term_k_27;
      t = get_config_0_0(t);
      t = e_2;
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm j_2 = NULL;
            j_2 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_2), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(CheckATermList(j_2), term_q_27));
            return(t);
          }
          t = if_verbose1_1_0(g_1, t);
          return(t);
        }
        ATerm f_1 (ATerm t)
        {
          t = c_to_object_code_0_0(t);
          t = link_object_code_0_0(t);
          return(t);
        }
        t = profile_p__2_0(d_1, f_1, t);
      }
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  d_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_3;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(e_3, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(e_3);
        t = term_u_27;
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = d_3;
              t = q_0(t);
              y_0 = t;
              {
                ATerm x_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_27 = t;
                    int a_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(a_28);
                      }
                    else
                      {
                        t = z_27;
                        {
                          ATerm z_0 = NULL;
                          z_0 = t;
                          if((e_3 != t))
                            {
                              _fail(t);
                            }
                          t = z_0;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_27;
                  }
                t = SSL_rename(e_3, y_0);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
              }
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              t = d_3;
              t = q_0(t);
              if((e_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_3);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(o_108, h_1, t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = term_b_28;
    return(t);
  }
  t = xtc_transform_1_0(k_1, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_c_28;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm k_3 = NULL;
    t = term_d_28;
    t = xtc_find_0_0(t);
    k_3 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, k_3), term_e_28);
    return(t);
  }
  t = xtc_transform_2_0(l_1, a_2, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_f_28;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm m_3 = NULL,n_3 = NULL;
    t = pass_verbose_0_0(t);
    m_3 = t;
    t = term_g_28;
    t = get_config_0_0(t);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm p_3 = NULL;
        p_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_3), term_g_28);
        return(t);
      }
      t = map_1_0(h_2, t);
      n_3 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_3), (ATerm) ATinsert(ATempty, term_h_28)), m_3);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(f_2, g_2, t);
  return(t);
}
ATerm output_canonical_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm r_3 = NULL;
    r_3 = t;
    t = term_i_28;
    t = get_config_0_0(t);
    t = r_3;
    {
      ATerm k_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = term_j_28;
          return(t);
        }
        t = get_outfile_1_0(m_2, t);
        return(t);
      }
      t = copy_to_1_0(k_2, t);
      {
        ATerm n_2 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          ATerm s_3 = NULL;
          t = pass_verbose_0_0(t);
          s_3 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(s_3), term_o_28), term_l_28);
          return(t);
        }
        t = xtc_transform_2_0(n_2, o_2, t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm q_2 (ATerm t)
            {
              t = term_p_28;
              return(t);
            }
            t = get_outfile_1_0(q_2, t);
            return(t);
          }
          t = copy_to_1_0(p_2, t);
          {
            ATerm r_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_q_28);
              return(t);
            }
            t = say_1_0(r_2, t);
            t = r_3;
          }
        }
      }
    }
    return(t);
  }
  t = try_1_0(i_2, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_c_29;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm t_3 = NULL;
    t = pass_verbose_0_0(t);
    t_3 = t;
    t = (ATerm) ATinsert(CheckATermList(t_3), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(s_2, t_2, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_d_29;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm x_3 = NULL;
    t = pass_verbose_0_0(t);
    x_3 = t;
    t = (ATerm) ATinsert(CheckATermList(x_3), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(u_2, v_2, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      t = term_e_29;
      return(t);
    }
    t = say_1_0(x_2, t);
    return(t);
  }
  t = if_verbose2_1_0(w_2, t);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm b_3 (ATerm t)
      {
        ATerm y_3 = NULL;
        y_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(CheckATermList(y_3), term_o_29));
        return(t);
      }
      t = if_verbose1_1_0(b_3, t);
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      t = canonicalize_0_0(t);
      t = olevel3_1_0(bound_unbound_vars_0_0, t);
      t = stratego_cf_0_0(t);
      t = output_canonical_0_0(t);
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      t = abox2text_0_0(t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            t = term_p_29;
            return(t);
          }
          t = get_outfile_1_0(g_3, t);
          return(t);
        }
        t = rename_to_1_0(c_3, t);
      }
      return(t);
    }
    t = profile_p__2_0(y_2, a_3, t);
  }
  return(t);
}
ATerm output_optimized_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm z_3 = NULL;
    z_3 = t;
    t = term_q_29;
    t = get_config_0_0(t);
    t = z_3;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = term_s_29;
          return(t);
        }
        t = get_outfile_1_0(j_3, t);
        return(t);
      }
      t = copy_to_1_0(i_3, t);
      {
        ATerm l_3 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          ATerm b_4 = NULL;
          t = pass_verbose_0_0(t);
          b_4 = t;
          t = (ATerm) ATinsert(CheckATermList(b_4), term_l_28);
          return(t);
        }
        t = xtc_transform_2_0(l_3, u_3, t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm w_3 (ATerm t)
            {
              t = term_t_29;
              return(t);
            }
            t = get_outfile_1_0(w_3, t);
            return(t);
          }
          t = copy_to_1_0(v_3, t);
          {
            ATerm k_4 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_q_28);
              return(t);
            }
            t = say_1_0(k_4, t);
            t = z_3;
          }
        }
      }
    }
    return(t);
  }
  t = try_1_0(h_3, t);
  return(t);
}
ATerm olevel1_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    t = term_u_29;
    return(t);
  }
  t = olevel_2_0(o_4, f_109, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm c_4 = NULL;
    t = pass_verbose_0_0(t);
    c_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(r_4, s_4, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = term_w_29;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm d_4 = NULL;
    t = pass_verbose_0_0(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(d_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(u_4, w_4, t);
  return(t);
}
ATerm dead_var_elim_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    t = term_a_30;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm e_4 = NULL;
    t = pass_verbose_0_0(t);
    e_4 = t;
    t = (ATerm) ATinsert(CheckATermList(e_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(c_5, d_5, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm d_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
      {
        t = term_l_30;
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm f_4 = NULL;
        t = pass_verbose_0_0(t);
        f_4 = t;
        t = (ATerm) ATinsert(CheckATermList(f_4), term_h_28);
        return(t);
      }
      t = xtc_transform_2_0(f_5, i_5, t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = d_30;
      {
        ATerm m_5 (ATerm t)
        {
          t = term_l_30;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          ATerm g_4 = NULL;
          t = pass_verbose_0_0(t);
          g_4 = t;
          t = (ATerm) ATinsert(CheckATermList(g_4), term_h_28);
          return(t);
        }
        t = xtc_transform_2_0(m_5, o_5, t);
      }
    }
  return(t);
}
ATerm const_prop_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    t = term_m_30;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm i_4 = NULL;
    t = pass_verbose_0_0(t);
    i_4 = t;
    t = (ATerm) ATinsert(CheckATermList(i_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(u_5, y_5, t);
  return(t);
}
ATerm olevel3_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    t = term_o_30;
    return(t);
  }
  t = olevel_2_0(c_6, h_109, t);
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    t = term_v_30;
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm j_4 = NULL;
    t = pass_verbose_0_0(t);
    j_4 = t;
    t = (ATerm) ATinsert(CheckATermList(j_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(e_6, f_6, t);
  return(t);
}
ATerm olevel5_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = term_a_31;
    return(t);
  }
  t = olevel_2_0(l_6, j_109, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    t = term_b_31;
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    ATerm l_4 = NULL;
    t = pass_verbose_0_0(t);
    l_4 = t;
    t = (ATerm) ATinsert(CheckATermList(l_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(m_6, n_6, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm m_4 = NULL;
    t = pass_verbose_0_0(t);
    m_4 = t;
    t = (ATerm) ATinsert(CheckATermList(m_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(o_6, p_6, t);
  return(t);
}
ATerm olevel2_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = olevel_2_0(s_6, g_109, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    t = term_d_31;
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    ATerm n_4 = NULL;
    t = pass_verbose_0_0(t);
    n_4 = t;
    t = (ATerm) ATinsert(CheckATermList(n_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(t_6, u_6, t);
  return(t);
}
ATerm olevel_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm p_4 = NULL,q_4 = NULL,t_4 = NULL;
    p_4 = t;
    t = d_109(t);
    q_4 = t;
    t = term_e_31;
    t = get_config_0_0(t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, q_4);
    t = geq_0_0(t);
    t = p_4;
    t = e_109(t);
    return(t);
  }
  t = try_1_0(v_6, t);
  return(t);
}
ATerm olevel4_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    t = term_f_31;
    return(t);
  }
  t = olevel_2_0(w_6, i_109, t);
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = term_g_31;
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm v_4 = NULL;
    t = pass_verbose_0_0(t);
    v_4 = t;
    t = (ATerm) ATinsert(CheckATermList(v_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(x_6, c_7, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    t = term_h_31;
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    ATerm x_4 = NULL;
    t = pass_verbose_0_0(t);
    x_4 = t;
    t = (ATerm) ATinsert(CheckATermList(x_4), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(d_7, f_7, t);
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
    ATerm y_4 = NULL;
    t = pass_verbose_0_0(t);
    y_4 = t;
    t = (ATerm) ATinsert(CheckATermList(y_4), term_h_28);
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
      ATerm n_7 (ATerm t)
      {
        ATerm z_4 = NULL;
        z_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(z_4), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(CheckATermList(z_4), term_k_31));
        return(t);
      }
      t = if_verbose1_1_0(n_7, t);
      return(t);
    }
    ATerm m_7 (ATerm t)
    {
      ATerm o_7 (ATerm t)
      {
        ATerm a_5 = NULL;
        a_5 = t;
        t = term_e_31;
        t = get_config_0_0(t);
        {
          ATerm p_7 (ATerm t)
          {
            t = term_l_31;
            return(t);
          }
          t = debug_1_0(p_7, t);
          t = a_5;
        }
        return(t);
      }
      t = if_verbose3_1_0(o_7, t);
      t = olevel1_1_0(optimize1_0_0, t);
      {
        ATerm q_7 (ATerm t)
        {
          ATerm r_7 (ATerm t)
          {
            ATerm b_5 = NULL;
            b_5 = t;
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
              t = b_5;
              t = fusion_0_0(t);
            }
            return(t);
          }
          t = try_1_0(r_7, t);
          return(t);
        }
        t = olevel2_1_0(q_7, t);
        t = olevel4_1_0(inline_0_0, t);
        t = olevel4_1_0(dead_def_elim_0_0, t);
        t = olevel4_1_0(optimize2_0_0, t);
        t = define_congruences_0_0(t);
        {
          ATerm s_7 (ATerm t)
          {
            t = const_prop_0_0(t);
            t = bound_unbound_vars_0_0(t);
            t = dead_var_elim_0_0(t);
            return(t);
          }
          t = olevel4_1_0(s_7, t);
          t = olevel4_1_0(optimize2_0_0, t);
          t = olevel2_1_0(compile_match_0_0, t);
          t = olevel2_1_0(desugar_case_0_0, t);
          t = olevel5_1_0(inline_0_0, t);
          t = olevel5_1_0(dead_def_elim_0_0, t);
          t = olevel3_1_0(optimize2_0_0, t);
          {
            ATerm t_7 (ATerm t)
            {
              t = const_prop_0_0(t);
              t = bound_unbound_vars_0_0(t);
              t = dead_var_elim_0_0(t);
              return(t);
            }
            t = olevel3_1_0(t_7, t);
            t = olevel1_1_0(optimize2_0_0, t);
            t = olevel1_1_0(stratego_of_0_0, t);
            t = olevel1_1_0(output_optimized_0_0, t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2_0(l_7, m_7, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = term_o_31;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm e_5 = NULL;
    t = pass_verbose_0_0(t);
    e_5 = t;
    t = (ATerm) ATinsert(CheckATermList(e_5), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(u_7, v_7, t);
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    t = term_p_31;
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    ATerm g_5 = NULL;
    t = pass_verbose_0_0(t);
    g_5 = t;
    t = (ATerm) ATinsert(CheckATermList(g_5), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(w_7, x_7, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL;
    t = pass_verbose_0_0(t);
    j_5 = t;
    t = term_r_31;
    t = get_config_0_0(t);
    {
      ATerm a_8 (ATerm t)
      {
        ATerm l_5 = NULL;
        l_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_5), term_r_31);
        return(t);
      }
      t = map_1_0(a_8, t);
      k_5 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(k_5), (ATerm) ATinsert(ATempty, term_h_28)), j_5);
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(y_7, z_7, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    t = term_s_31;
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm n_5 = NULL;
    t = pass_verbose_0_0(t);
    n_5 = t;
    t = (ATerm) ATinsert(CheckATermList(n_5), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(d_8, e_8, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm q_5 = NULL;
    t = pass_verbose_0_0(t);
    q_5 = t;
    t = (ATerm) ATinsert(CheckATermList(q_5), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(f_8, g_8, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm r_5 = NULL;
    r_5 = t;
    t = term_u_31;
    t = get_config_0_0(t);
    t = r_5;
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
        ATerm m_8 (ATerm t)
        {
          ATerm s_8 (ATerm t)
          {
            t = term_y_31;
            return(t);
          }
          t = get_outfile_1_0(s_8, t);
          return(t);
        }
        t = copy_to_1_0(m_8, t);
        {
          ATerm u_8 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_z_31);
            return(t);
          }
          t = say_1_0(u_8, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(h_8, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm t_5 = NULL,v_5 = NULL;
    t_5 = t;
    t = term_a_32;
    t = get_config_0_0(t);
    v_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_5, term_p_26);
    t = geq_0_0(t);
    t = t_5;
    t = b_101(t);
    return(t);
  }
  t = try_1_0(x_8, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm g_9 (ATerm t)
  {
    t = term_b_32;
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    ATerm x_5 = NULL;
    t = pass_verbose_0_0(t);
    x_5 = t;
    t = (ATerm) ATinsert(CheckATermList(x_5), term_h_28);
    return(t);
  }
  t = xtc_transform_2_0(g_9, k_9, t);
  {
    ATerm m_9 (ATerm t)
    {
      ATerm n_9 (ATerm t)
      {
        ATerm r_9 (ATerm t)
        {
          t = term_c_32;
          return(t);
        }
        t = get_outfile_1_0(r_9, t);
        w_5 = t;
        return(t);
      }
      t = copy_to_1_0(n_9, t);
      {
        ATerm s_9 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_5)), term_d_32);
          return(t);
        }
        t = say_1_0(s_9, t);
      }
      return(t);
    }
    t = if_keep2_1_0(m_9, t);
  }
  return(t);
}
ATerm repair_types_0_0 (ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    t = term_e_32;
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm a_6 = NULL;
    t = pass_verbose_0_0(t);
    a_6 = t;
    t = (ATerm) ATinsert(ATempty, a_6);
    t = concat_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(t_9, u_9, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm d_6 = NULL,g_6 = NULL;
    d_6 = t;
    t = term_a_32;
    t = get_config_0_0(t);
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_6, term_o_30);
    t = geq_0_0(t);
    t = d_6;
    t = c_101(t);
    return(t);
  }
  t = try_1_0(v_9, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      h_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_32;
  t = w_78(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(h_6), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_32, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_6), (ATerm) ATempty))))));
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = y_108(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  ATerm w_9 (ATerm t)
  {
    ATerm q_6 = NULL;
    q_6 = t;
    t = term_h_32;
    t = get_config_0_0(t);
    j_6 = t;
    {
      ATerm x_9 (ATerm t)
      {
        ATerm y_9 (ATerm t)
        {
          t = term_i_32;
          return(t);
        }
        t = debug_1_0(y_9, t);
        return(t);
      }
      t = if_verbose2_1_0(x_9, t);
      t = q_6;
      {
        ATerm z_9 (ATerm t)
        {
          ATerm a_10 (ATerm t)
          {
            t = j_6;
            return(t);
          }
          t = AddMain_1_0(a_10, t);
          return(t);
        }
        t = xtc_io_transform_1_0(z_9, t);
      }
    }
    return(t);
  }
  t = try_1_0(w_9, t);
  {
    ATerm b_10 (ATerm t)
    {
      ATerm c_10 (ATerm t)
      {
        ATerm d_10 (ATerm t)
        {
          t = term_j_32;
          return(t);
        }
        t = get_outfile_1_0(d_10, t);
        k_6 = t;
        return(t);
      }
      t = copy_to_1_0(c_10, t);
      {
        ATerm e_10 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_6)), term_k_32);
          return(t);
        }
        t = say_1_0(e_10, t);
      }
      return(t);
    }
    t = if_keep3_1_0(b_10, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  ATerm f_10 (ATerm t)
  {
    ATerm a_7 = NULL;
    a_7 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_6 = ATgetFirst((ATermList) t);
        {
          ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_6;
    {
      ATerm g_10 (ATerm t)
      {
        ATerm h_10 (ATerm t)
        {
          ATerm b_7 = NULL;
          b_7 = t;
          t = SSL_remove(b_7);
          return(t);
        }
        t = try_1_0(h_10, t);
        return(t);
      }
      t = map_1_0(g_10, t);
      t = a_7;
      {
        ATerm i_10 (ATerm t)
        {
          t = term_m_32;
          return(t);
        }
        t = end_scope_1_0(i_10, t);
      }
    }
    return(t);
  }
  t = repeat_1_0(f_10, t);
  z_6 = t;
  t = SSL_exit(z_6);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_26;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = term_u_27;
      }
    return(t);
  }
  t = copy_to_1_0(j_10, t);
  t = term_h_26;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL;
  t = x_78(t);
  e_7 = t;
  t = term_p_32;
  t = get_config_0_0(t);
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_7, e_7);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 = NULL;
        t = b_8;
        t = o_0(t);
        e_1 = t;
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
          t = SSL_copy(c_8, e_1);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
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
              ATerm m_1 = NULL;
              t = b_8;
              t = o_0(t);
              m_1 = t;
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
                                ATerm n_1 = NULL;
                                n_1 = t;
                                if((c_8 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_1;
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
                t = SSL_copy(c_8, m_1);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
              }
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = b_8;
              t = o_0(t);
              if((c_8 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_8);
            }
        }
      }
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm k_10 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL;
    i_8 = t;
    t = term_b_33;
    t = get_config_0_0(t);
    t = i_8;
    {
      ATerm l_10 (ATerm t)
      {
        ATerm m_10 (ATerm t)
        {
          t = term_c_33;
          return(t);
        }
        t = get_outfile_1_0(m_10, t);
        return(t);
      }
      t = copy_to_1_0(l_10, t);
      j_8 = t;
      t = (ATerm) ATinsert(ATempty, term_d_33);
      t = echo_0_0(t);
      t = j_8;
      t = xtc_io_exit_0_0(t);
    }
    return(t);
  }
  t = try_1_0(k_10, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL;
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
        t = term_u_29;
      }
    k_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_8, term_u_29);
    {
      ATerm g_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(k_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(h_33);
        }
      else
        {
          t = g_33;
          t = SSL_subtr(k_8, (ATerm) ATmakeInt(1));
        }
      n_8 = t;
      t = SSL_int_to_string(n_8);
      l_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, l_8), term_a_32);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  t = term_o_26;
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
        t = term_u_29;
      }
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_8, term_u_29);
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(o_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          t = SSL_subtr(o_8, (ATerm) ATmakeInt(1));
        }
      q_8 = t;
      t = SSL_int_to_string(q_8);
      p_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_8), term_o_26);
    }
  }
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_26;
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
  r_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_8), term_o_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = t_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          v_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(v_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_8, term_p_33);
  t = open_stream_0_0(t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, z_8);
  t = v_98(t);
  t = fclose_0_0(t);
  t = z_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_33 = ATgetArgument(t, 0);
        if(match_cons(q_33, sym_Stream_1))
          {
            b_9 = ATgetArgument(q_33, 0);
          }
        else
          _fail(t);
        c_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(b_9, c_9);
    d_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
    return(t);
  }
  t = WriteToFile_1_0(n_10, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_9 = NULL,h_9 = NULL;
  e_9 = t;
  t = xtc_new_file_0_0(t);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, e_9);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(h_9);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_9);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(w_108, x_108, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm i_9 = NULL;
  ATerm o_10 (ATerm t)
  {
    ATerm o_9 = NULL;
    o_9 = t;
    t = SSL_explode_string(o_9);
    return(t);
  }
  t = map_1_0(o_10, t);
  t = concat_0_0(t);
  i_9 = t;
  t = SSL_implode_string(i_9);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_10 = NULL,x_10 = NULL,y_10 = NULL,a_11 = NULL;
  u_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_10 = ATgetArgument(t, 0);
      {
        ATerm l_2 = NULL;
        t = SSL_int_to_string(x_10);
        l_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_33), l_2), term_r_33);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          a_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_10);
      z_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_11), term_u_33), z_2), term_t_33), x_10);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm i_11 = NULL;
  ATerm p_10 (ATerm t)
  {
    t = v_86(t);
    i_11 = t;
    return(t);
  }
  t = fetch_1_0(p_10, t);
  t = not_null(i_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_37), term_v_37), term_r_37), term_n_37), term_k_37), term_g_37), term_c_37), term_y_36), term_u_36), term_q_36), term_m_36), term_i_36), term_e_36), term_a_36), term_w_35), term_s_35), term_o_35), term_l_35), term_h_35), term_d_35), term_z_34), term_v_34), term_r_34), term_n_34), term_j_34), term_f_34), term_c_34), term_z_33);
        {
          ATerm q_10 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm a_38 = ATgetArgument(t, 0);
                if((j_11 != ATgetArgument(t, 1)))
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
          t = fetch_elem_1_0(q_10, t);
        }
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  {
    ATerm r_10 (ATerm t)
    {
      ATerm o_11 = NULL,p_11 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm c_38 = ATgetArgument(t, 0);
          o_11 = ATgetArgument(t, 1);
          {
            ATerm d_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_11;
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
        p_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(ATinsert(ATempty, p_11), term_f_38));
      }
      return(t);
    }
    t = try_1_0(r_10, t);
    t = k_11;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  t = fork_0_0(t);
  u_11 = t;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_11;
        t = q_101(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = (ATerm) ATmakeAppl(sym__2, u_11, t_11);
        t = r_101(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm c_12 = NULL;
  ATerm s_10 (ATerm t)
  {
    ATerm d_12 = NULL;
    if(match_cons(t, sym__2))
      {
        d_12 = ATgetArgument(t, 0);
        c_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(d_12);
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
    t = c_12;
    return(t);
  }
  t = fork_2_0(s_101, s_10, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_10 (ATerm t)
    {
      t = SSL_execvp(e_12, f_12);
      return(t);
    }
    t = fork_and_wait_1_0(t_10, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  t = n_108(t);
  t = xtc_find_warning_0_0(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_12, g_12);
  t = call_0_0(t);
  t = g_12;
  return(t);
}
ATerm assert_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_97(t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_12, i_12, j_12);
  t = table_push_0_0(t);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_12, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        l_12 = ATgetFirst((ATermList) t);
        n_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(k_12, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_12), (ATerm) ATinsert(CheckATermList(l_12), i_12)));
    t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = o_98(t);
  {
    ATerm v_10 (ATerm t)
    {
      t = term_n_38;
      return(t);
    }
    t = debug_1_0(v_10, t);
    t = o_12;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm i_13 (ATerm t_12, ATerm t)
  {
    t = t_12;
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
        ATerm w_10 (ATerm t)
        {
          t = term_r_38;
          return(t);
        }
        t = obsolete_1_0(w_10, t);
        t = (ATerm) ATmakeAppl(sym__2, t_12, term_p_33);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm j_13 (ATerm v_12, ATerm w_12, ATerm a_13, ATerm t)
  {
    t = SSL_open_file(v_12, w_12);
    return(t);
  }
  ATerm d_13 = NULL,f_13 = NULL,h_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_13(d_13, t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = j_13(f_13, h_13, d_13, t);
          }
      }
    }
  else
    {
      t = i_13(d_13, t);
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
  ATerm k_13 = NULL;
  t = term_f_32;
  t = new_0_0(t);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_13, term_u_38);
  t = conc_strings_0_0(t);
  {
    ATerm z_10 (ATerm t)
    {
      ATerm f_3 = NULL;
      f_3 = t;
      t = SSL_access(f_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(z_10, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_13 = NULL;
  t = new_file_0_0(t);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_13, term_p_33);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, m_13, term_f_32);
  {
    ATerm b_11 (ATerm t)
    {
      t = term_m_32;
      return(t);
    }
    t = assert_1_0(b_11, t);
    t = m_13;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  y_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_3 = NULL,q_3 = NULL;
      t = y_13;
      t = xtc_new_file_0_0(t);
      o_3 = t;
      t = n_0(t);
      q_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_3, (ATerm) ATinsert(ATinsert(ATempty, o_3), term_x_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(o_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
    }
  else
    {
      ATerm a_4 = NULL,h_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_13;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = n_0(t);
      h_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_x_26), z_13), term_v_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  c_14 = t;
  t = d_14;
  t = b_71(t);
  e_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, e_14), c_14);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
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
      t = xtc_transform_file_2_0(p_108, q_108, t);
    }
  else
    {
      t = w_38;
      t = xtc_transform_term_2_0(p_108, q_108, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL;
    j_14 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    k_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_14, term_o_30);
    t = geq_0_0(t);
    t = j_14;
    t = a_100(t);
    return(t);
  }
  t = try_1_0(c_11, t);
  return(t);
}
ATerm basename_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  t = SSL_explode_string(l_14);
  {
    ATerm d_11 (ATerm t)
    {
      ATerm a_39 = t;
      int b_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, d_11, t);
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
                ATerm e_11 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(e_11, _id, t);
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                {
                  ATerm f_11 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2_0(f_11, g_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(d_11, t);
    m_14 = t;
    t = SSL_implode_string(m_14);
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
  ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_14;
  t = basename_0_0(t);
  r_14 = t;
  {
    ATerm g_11 (ATerm t)
    {
      ATerm h_11 (ATerm t)
      {
        t = term_e_39;
        return(t);
      }
      t = debug_1_0(h_11, t);
      return(t);
    }
    t = if_verbose3_1_0(g_11, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), r_14);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, term_g_39, r_14);
    {
      ATerm h_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_26;
          t = get_config_0_0(t);
          t = basename_0_0(t);
          ;
          LocalPopChoice(i_39);
        }
      else
        {
          t = h_39;
          t = r_14;
        }
      s_14 = t;
      {
        ATerm l_11 (ATerm t)
        {
          ATerm m_11 (ATerm t)
          {
            t = term_j_39;
            return(t);
          }
          t = debug_1_0(m_11, t);
          return(t);
        }
        t = if_verbose3_1_0(l_11, t);
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), s_14);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_14);
      }
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm n_11 (ATerm t)
    {
      t = term_k_39;
      return(t);
    }
    ATerm q_11 (ATerm t)
    {
      ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
      t_14 = t;
      t = dep_name_0_0(t);
      u_14 = t;
      t = t_14;
      t = pass_verbose_0_0(t);
      v_14 = t;
      t = t_14;
      t = pass_keep_0_0(t);
      w_14 = t;
      t = term_l_39;
      t = get_config_0_0(t);
      x_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_14), v_14), x_14), u_14);
      t = concat_0_0(t);
      return(t);
    }
    t = xtc_transform_2_0(n_11, q_11, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm s_11 (ATerm t)
    {
      t = term_m_39;
      return(t);
    }
    t = debug_1_0(s_11, t);
    return(t);
  }
  t = if_verbose2_1_0(r_11, t);
  {
    ATerm v_11 (ATerm t)
    {
      ATerm x_11 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(y_14), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(CheckATermList(y_14), term_n_39));
        return(t);
      }
      t = if_verbose1_1_0(x_11, t);
      return(t);
    }
    ATerm w_11 (ATerm t)
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
    t = profile_p__2_0(v_11, w_11, t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            ATerm r_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_15, d_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_39 = ATgetFirst((ATermList) t);
            h_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_5;
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
    e_15 = t;
    t = SSL_table_put(b_15, d_15, e_15);
    t = (ATerm) ATmakeAppl(sym__2, b_15, d_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  k_15 = t;
  t = z_96(t);
  l_15 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_15, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        n_15 = ATgetFirst((ATermList) t);
        m_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_15, (ATerm)ATmakeAppl(sym_Scopes_0), m_15);
    t = n_15;
    {
      ATerm y_11 (ATerm t)
      {
        ATerm o_15 = NULL;
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, o_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(y_11, t);
      t = k_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_79(t);
      t = o_79(t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      t = o_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  t = y_96(t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, term_x_39);
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
        t = SSL_table_get(s_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATempty;
      }
    t_15 = t;
    t = SSL_table_put(s_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_15), (ATerm) ATempty));
    t = r_15;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm y_15 = NULL;
  ATerm z_11 (ATerm t)
  {
    t = term_m_32;
    return(t);
  }
  t = begin_scope_1_0(z_11, t);
  {
    ATerm a_12 (ATerm t)
    {
      ATerm z_15 = NULL;
      z_15 = t;
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
            y_15 = ATgetFirst((ATermList) t);
            {
              ATerm e_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_15;
        {
          ATerm b_12 (ATerm t)
          {
            ATerm m_12 (ATerm t)
            {
              ATerm a_16 = NULL;
              a_16 = t;
              t = SSL_remove(a_16);
              return(t);
            }
            t = try_1_0(m_12, t);
            return(t);
          }
          t = map_1_0(b_12, t);
          t = z_15;
          {
            ATerm p_12 (ATerm t)
            {
              t = term_m_32;
              return(t);
            }
            t = end_scope_1_0(p_12, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(z_107, a_12, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL;
        t = term_v_38;
        t = get_config_0_0(t);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_16);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = term_h_40;
      }
    t = c_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_12, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(r_12, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    c_16 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, term_u_29);
    t = geq_0_0(t);
    t = c_16;
    t = y_99(t);
    return(t);
  }
  t = try_1_0(s_12, t);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(match_cons(i_40, sym__4))
        {
          i_16 = ATgetArgument(i_40, 0);
          j_16 = ATgetArgument(i_40, 1);
          k_16 = ATgetArgument(i_40, 2);
          l_16 = ATgetArgument(i_40, 3);
        }
      else
        _fail(t);
      {
        ATerm j_40 = ATgetArgument(t, 1);
        if(match_cons(j_40, sym__4))
          {
            m_16 = ATgetArgument(j_40, 0);
            n_16 = ATgetArgument(j_40, 1);
            p_16 = ATgetArgument(j_40, 2);
            q_16 = ATgetArgument(j_40, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, m_16);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(i_16, m_16);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = SSL_subtr(i_16, m_16);
      }
    r_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_16, n_16);
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(j_16, n_16);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          t = SSL_subtr(j_16, n_16);
        }
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, p_16);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(k_16, p_16);
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = SSL_subtr(k_16, p_16);
          }
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, q_16);
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(l_16, q_16);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              t = SSL_subtr(l_16, q_16);
            }
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__4, r_16, s_16, t_16, u_16);
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
ATerm profile_p__2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,p_5 = NULL,s_5 = NULL,z_5 = NULL,b_6 = NULL;
  v_16 = t;
  t = times_0_0(t);
  w_16 = t;
  t = v_16;
  t = t_103(t);
  x_16 = t;
  t = times_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, w_16);
  t = diff_times_0_0(t);
  z_16 = t;
  if(match_cons(t, sym__4))
    {
      p_5 = ATgetArgument(t, 0);
      {
        ATerm s_40 = ATgetArgument(t, 1);
      }
      s_5 = ATgetArgument(t, 2);
      {
        ATerm t_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_5, s_5);
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_5, s_5);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = SSL_addr(p_5, s_5);
      }
    b_17 = t;
    t = SSL_TicksToSeconds(b_17);
    a_17 = t;
    t = z_16;
    if(match_cons(t, sym__4))
      {
        ATerm w_40 = ATgetArgument(t, 0);
        z_5 = ATgetArgument(t, 1);
        {
          ATerm x_40 = ATgetArgument(t, 2);
        }
        b_6 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_5, b_6);
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(z_5, b_6);
          ;
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          t = SSL_addr(z_5, b_6);
        }
      d_17 = t;
      t = SSL_TicksToSeconds(d_17);
      c_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_17), term_b_41), a_17), term_a_41);
      t = s_103(t);
      t = x_16;
    }
  }
  return(t);
}
ATerm debug_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  t = h_98(t);
  f_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_17), f_17));
  t = e_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      t = SSL_is_string(l_17);
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
            ATerm u_12 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(u_12, t);
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
              r_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_17 = ATgetArgument(t, 0);
                  t = s_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_17 = ATgetArgument(t, 0);
                      t = s_17;
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
                              ATerm x_12 (ATerm t)
                              {
                                t = term_i_41;
                                return(t);
                              }
                              t = debug_1_0(x_12, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_17 = NULL,z_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_17 = ATgetArgument(t, 0);
                          t_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_17;
                      t = eval_config_0_0(t);
                      x_17 = t;
                      t = t_17;
                      t = eval_config_0_0(t);
                      z_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
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
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18);
  {
    ATerm y_12 (ATerm t)
    {
      ATerm d_18 = NULL;
      t = eval_config_0_0(t);
      d_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_18, d_18);
      t = d_18;
      return(t);
    }
    t = try_1_0(y_12, t);
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
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), e_18);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_18;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  t = term_j_41;
  t = get_config_0_0(t);
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), g_18), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
  t = f_18;
  return(t);
}
ATerm try_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_78(t);
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
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_table_keys(h_18);
  {
    ATerm z_12 (ATerm t)
    {
      ATerm i_18 = NULL,j_18 = NULL;
      i_18 = t;
      t = SSL_table_get(h_18, i_18);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
      return(t);
    }
    t = map_1_0(z_12, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm k_18 = NULL,l_18 = NULL;
    k_18 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    l_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_18, term_a_31);
    t = geq_0_0(t);
    t = k_18;
    t = c_100(t);
    return(t);
  }
  t = try_1_0(b_13, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_18));
  {
    ATerm c_13 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((q_18 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          r_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(c_13, t);
    t = not_null(r_18);
  }
  return(t);
}
ATerm filter_1_0 (ATerm n_93 (ATerm), ATerm t)
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
            ATerm e_13 (ATerm t)
            {
              t = filter_1_0(n_93, t);
              return(t);
            }
            t = Cons_2_0(n_93, e_13, t);
            ;
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            {
              ATerm v_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_41 = ATgetFirst((ATermList) t);
                  v_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_18;
              t = filter_1_0(n_93, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm g_13 (ATerm t)
    {
      t = u_79(t);
      t = x_18(t);
      return(t);
    }
    t = try_1_0(g_13, t);
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
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
    t = y_18;
  }
  return(t);
}
ATerm say_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,r_6 = NULL;
  a_19 = t;
  t = l_98(t);
  r_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_6));
  t = a_19;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm b_19 = NULL,c_19 = NULL;
    b_19 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    c_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_19, term_f_31);
    t = geq_0_0(t);
    t = b_19;
    t = b_100(t);
    return(t);
  }
  t = try_1_0(o_13, t);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_19;
        if((m_19 != t))
          {
            _fail(t);
          }
        t = l_19;
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = l_19;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_19, n_19);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = SSL_gtr(m_19, n_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL;
    q_19 = t;
    t = term_o_26;
    t = get_config_0_0(t);
    r_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_19, term_h_34);
    t = geq_0_0(t);
    t = q_19;
    t = d_100(t);
    return(t);
  }
  t = try_1_0(p_13, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_19 = ATgetFirst((ATermList) t);
      x_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_90(t);
  {
    ATerm q_13 (ATerm t)
    {
      ATerm y_19 = NULL;
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_19, y_19);
      t = q_90(t);
      return(t);
    }
    t = fetch_1_0(q_13, t);
    t = x_19;
  }
  return(t);
}
ATerm union_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm d_20 (ATerm t)
    {
      ATerm w_41 = t;
      int x_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_19;
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
                  t = z_19;
                  return(t);
                }
                t = HdMember_p__2_0(m_90, r_13, t);
                t = d_20(t);
                ;
                LocalPopChoice(z_41);
              }
            else
              {
                t = y_41;
                t = Cons_2_0(_id, d_20, t);
              }
          }
        }
      return(t);
    }
    t = d_20(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm e_20 = NULL;
    if(match_cons(t, sym__2))
      {
        e_20 = ATgetArgument(t, 0);
        if((e_20 != ATgetArgument(t, 1)))
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
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__3))
    {
      l_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      o_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_20, n_20);
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
        t = SSL_table_get(l_20, n_20);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_20, o_20);
    t = union_0_0(t);
    s_20 = t;
    t = SSL_table_put(l_20, n_20, s_20);
    t = (ATerm) ATmakeAppl(sym__3, l_20, n_20, o_20);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_20;
  {
    ATerm t_13 (ATerm t)
    {
      ATerm v_20 = NULL,w_20 = NULL;
      if(match_cons(t, sym__2))
        {
          v_20 = ATgetArgument(t, 0);
          w_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_20, v_20, w_20);
      t = b_105(t);
      return(t);
    }
    t = map_1_0(t_13, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_21 (ATerm m_21, ATerm t)
  {
    t = SSL_fclose(m_21);
    return(t);
  }
  ATerm q_21 = NULL,r_21 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_21 = ATgetArgument(t, 0);
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_21);
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            t = t_21(r_21, t);
          }
      }
    }
  else
    {
      t = t_21(r_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = SSL_stdin_stream();
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  t = SSL_stdout_stream();
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_stderr_stream();
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_21;
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
        ATerm w_8 = NULL,f_9 = NULL;
        w_8 = t;
        t = SSL_explode_term(w_8);
        if(match_cons(t, sym__2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_42 = ATgetArgument(t, 1);
              if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
                {
                  f_9 = ATgetFirst((ATermList) l_42);
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
        t = f_9;
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
              ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
              ATerm u_13 (ATerm t)
              {
                ATerm e_22 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_22;
                return(t);
              }
              t = _2_0(u_13, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_22 = ATgetArgument(t, 0);
                  c_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_22, c_22);
              d_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
              ;
              LocalPopChoice(o_42);
            }
          else
            {
              t = n_42;
              {
                ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
                ATerm v_13 (ATerm t)
                {
                  ATerm i_22 = NULL;
                  i_22 = t;
                  t = SSL_is_string(i_22);
                  return(t);
                }
                t = _2_0(v_13, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_22 = ATgetArgument(t, 0);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_22, g_22);
                h_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL;
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, term_r_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm w_13 (ATerm t)
        {
          t = term_s_42;
          return(t);
        }
        t = debug_1_0(w_13, t);
        _fail(t);
      }
    }
  j_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_22);
  k_22 = t;
  t = j_22;
  t = fclose_0_0(t);
  t = k_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = SSL_access(j_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
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
                ATerm l_9 = NULL;
                l_9 = t;
                t = SSL_access(l_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_42;
              }
            {
              ATerm x_13 (ATerm t)
              {
                t = term_y_42;
                return(t);
              }
              t = debug_1_0(x_13, t);
            }
            ;
            LocalPopChoice(w_42);
          }
        else
          {
            t = v_42;
            {
              ATerm a_14 (ATerm t)
              {
                t = term_z_42;
                return(t);
              }
              t = debug_1_0(a_14, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  {
    ATerm b_14 (ATerm t)
    {
      ATerm g_14 (ATerm t)
      {
        t = term_a_43;
        return(t);
      }
      t = debug_1_0(g_14, t);
      return(t);
    }
    t = if_verbose5_1_0(b_14, t);
    {
      ATerm b_43 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_22));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_43;
        }
      q_22 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_22));
      t = q_22;
      {
        ATerm h_14 (ATerm t)
        {
          ATerm i_14 (ATerm t)
          {
            t = term_c_43;
            return(t);
          }
          t = debug_1_0(i_14, t);
          return(t);
        }
        t = if_verbose4_1_0(h_14, t);
        t = read_repository_file_0_0(t);
        {
          ATerm o_14 (ATerm t)
          {
            ATerm q_14 (ATerm t)
            {
              t = term_d_43;
              return(t);
            }
            t = say_1_0(q_14, t);
            return(t);
          }
          t = if_verbose6_1_0(o_14, t);
          r_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_43, r_22);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm z_14 (ATerm t)
            {
              ATerm a_15 (ATerm t)
              {
                t = term_f_43;
                return(t);
              }
              t = say_1_0(a_15, t);
              return(t);
            }
            t = if_verbose6_1_0(z_14, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_22), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_e_43, (ATerm)ATmakeAppl(sym_Imported_1, p_22), (ATerm) ATempty);
            {
              ATerm c_15 (ATerm t)
              {
                ATerm f_15 (ATerm t)
                {
                  t = term_d_43;
                  return(t);
                }
                t = say_1_0(f_15, t);
                return(t);
              }
              t = if_verbose4_1_0(c_15, t);
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
  ATerm s_22 = NULL;
  ATerm g_15 (ATerm t)
  {
    ATerm h_15 (ATerm t)
    {
      t = term_l_43;
      return(t);
    }
    t = debug_1_0(h_15, t);
    return(t);
  }
  t = if_verbose5_1_0(g_15, t);
  s_22 = t;
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
    t = s_22;
    {
      ATerm i_15 (ATerm t)
      {
        ATerm j_15 (ATerm t)
        {
          t = term_o_43;
          return(t);
        }
        t = debug_1_0(j_15, t);
        return(t);
      }
      t = if_verbose5_1_0(i_15, t);
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
      ATerm p_15 (ATerm t)
      {
        ATerm q_15 (ATerm t)
        {
          t = term_r_43;
          return(t);
        }
        t = debug_1_0(q_15, t);
        return(t);
      }
      t = if_verbose5_1_0(p_15, t);
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
              ATerm p_9 = NULL,q_9 = NULL;
              p_9 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_9));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_43 = ATgetFirst((ATermList) t);
                  if(match_cons(u_43, sym__2))
                    {
                      ATerm w_43 = ATgetArgument(u_43, 0);
                      q_9 = ATgetArgument(u_43, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = q_9;
            }
          }
        {
          ATerm u_15 (ATerm t)
          {
            ATerm v_15 (ATerm t)
            {
              t = term_r_43;
              return(t);
            }
            t = debug_1_0(v_15, t);
            return(t);
          }
          t = if_verbose5_1_0(u_15, t);
        }
      }
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm t_22 = NULL;
        t_22 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_22), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_43), t_22), term_x_43);
        {
          ATerm w_15 (ATerm t)
          {
            t = term_e_43;
            t = table_getlist_0_0(t);
            {
              ATerm x_15 (ATerm t)
              {
                t = term_z_43;
                return(t);
              }
              t = debug_1_0(x_15, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(w_15, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
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
    x_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
    t = conc_0_0(t);
    y_22 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_22, y_22);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, v_22, y_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  b_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_23;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm j_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_23 = ATgetFirst((ATermList) t);
          d_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_23 = ATgetFirst((ATermList) t);
          f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      t = j_0(t);
      t = e_23;
      t = k_0(t);
      j_23 = t;
      t = (ATerm) ATinsert(CheckATermList(f_23), j_23);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_23;
        t = get_config_0_0(t);
        t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23);
        t = (ATerm) ATmakeAppl(sym__2, term_f_39, k_23);
        ;
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23, l_23);
        t = (ATerm) ATmakeAppl(sym__3, term_f_39, k_23, l_23);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
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
    o_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_23, n_23);
    t = conc_0_0(t);
    p_23 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_23, p_23);
    t = (ATerm) ATmakeAppl(sym__3, term_f_39, m_23, p_23);
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_16 (ATerm t)
      {
        ATerm x_23 = NULL;
        x_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_23);
        t = term_f_32;
        return(t);
      }
      ATerm g_16 (ATerm t)
      {
        t = term_i_44;
        return(t);
      }
      t = ArgOption_3_0(e_16, f_16, g_16, t);
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
            ATerm h_16 (ATerm t)
            {
              ATerm y_23 = NULL;
              y_23 = t;
              if(match_string(t, "-o"))
                {
                  t = y_23;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
                    _fail(t);
                  t = y_23;
                }
              return(t);
            }
            ATerm o_16 (ATerm t)
            {
              ATerm z_23 = NULL;
              z_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_23);
              t = term_f_32;
              return(t);
            }
            ATerm g_17 (ATerm t)
            {
              t = term_l_44;
              return(t);
            }
            t = ArgOption_3_0(h_16, o_16, g_17, t);
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
                  ATerm h_17 (ATerm t)
                  {
                    ATerm a_24 = NULL;
                    a_24 = t;
                    if(match_string(t, "-I"))
                      {
                        t = a_24;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
                          _fail(t);
                        t = a_24;
                      }
                    return(t);
                  }
                  ATerm i_17 (ATerm t)
                  {
                    ATerm b_24 = NULL;
                    b_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_l_39, (ATerm) ATinsert(ATinsert(ATempty, b_24), term_l_39));
                    t = extend_config_0_0(t);
                    t = term_f_32;
                    return(t);
                  }
                  ATerm j_17 (ATerm t)
                  {
                    t = term_o_44;
                    return(t);
                  }
                  t = ArgOption_3_0(h_17, i_17, j_17, t);
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
                        ATerm k_17 (ATerm t)
                        {
                          ATerm c_24 = NULL;
                          c_24 = t;
                          if(match_string(t, "--main"))
                            {
                              t = c_24;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
                                _fail(t);
                              t = c_24;
                            }
                          return(t);
                        }
                        ATerm m_17 (ATerm t)
                        {
                          ATerm d_24 = NULL;
                          d_24 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), d_24);
                          t = term_f_32;
                          return(t);
                        }
                        ATerm n_17 (ATerm t)
                        {
                          t = term_r_44;
                          return(t);
                        }
                        t = ArgOption_3_0(k_17, m_17, n_17, t);
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
                              ATerm o_17 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm p_17 (ATerm t)
                              {
                                ATerm e_24 = NULL;
                                e_24 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_g_28, (ATerm) ATinsert(ATempty, e_24));
                                t = post_extend_config_0_0(t);
                                t = term_f_32;
                                return(t);
                              }
                              ATerm q_17 (ATerm t)
                              {
                                t = term_u_44;
                                return(t);
                              }
                              t = ArgOption_3_0(o_17, p_17, q_17, t);
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
                                    ATerm u_17 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm v_17 (ATerm t)
                                    {
                                      ATerm f_24 = NULL;
                                      f_24 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_j_27, (ATerm) ATinsert(ATempty, f_24));
                                      t = extend_config_0_0(t);
                                      t = term_f_32;
                                      return(t);
                                    }
                                    ATerm w_17 (ATerm t)
                                    {
                                      t = term_x_44;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(u_17, v_17, w_17, t);
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
                                          ATerm y_17 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm a_18 (ATerm t)
                                          {
                                            ATerm g_24 = NULL;
                                            g_24 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_a_27, (ATerm) ATinsert(ATempty, g_24));
                                            t = extend_config_0_0(t);
                                            t = term_f_32;
                                            return(t);
                                          }
                                          ATerm b_18 (ATerm t)
                                          {
                                            t = term_a_45;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(y_17, a_18, b_18, t);
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
                                                ATerm m_18 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm n_18 (ATerm t)
                                                {
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = term_f_32;
                                                  return(t);
                                                }
                                                ATerm o_18 (ATerm t)
                                                {
                                                  t = term_d_45;
                                                  return(t);
                                                }
                                                t = Option_3_0(m_18, n_18, o_18, t);
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
                                                      ATerm s_18 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm t_18 (ATerm t)
                                                      {
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = term_f_32;
                                                        return(t);
                                                      }
                                                      ATerm u_18 (ATerm t)
                                                      {
                                                        t = term_g_45;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(s_18, t_18, u_18, t);
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
                                                            ATerm w_18 (ATerm t)
                                                            {
                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm z_18 (ATerm t)
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
                                                            t = Option_3_0(w_18, z_18, d_19, t);
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
                                                                  ATerm f_19 (ATerm t)
                                                                  {
                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                    t = term_f_32;
                                                                    return(t);
                                                                  }
                                                                  ATerm g_19 (ATerm t)
                                                                  {
                                                                    t = term_m_45;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3_0(e_19, f_19, g_19, t);
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
                                                                        ATerm h_19 (ATerm t)
                                                                        {
                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output-canonical", 0, ATtrue)))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm i_19 (ATerm t)
                                                                        {
                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                          t = term_f_32;
                                                                          return(t);
                                                                        }
                                                                        ATerm j_19 (ATerm t)
                                                                        {
                                                                          t = term_p_45;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3_0(h_19, i_19, j_19, t);
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
                                                                              ATerm k_19 (ATerm t)
                                                                              {
                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm o_19 (ATerm t)
                                                                              {
                                                                                ATerm h_24 = NULL,i_24 = NULL;
                                                                                h_24 = t;
                                                                                t = SSL_string_to_int(h_24);
                                                                                i_24 = t;
                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_24);
                                                                                t = term_f_32;
                                                                                return(t);
                                                                              }
                                                                              ATerm p_19 (ATerm t)
                                                                              {
                                                                                t = term_s_45;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3_0(k_19, o_19, p_19, t);
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
                                                                                    ATerm s_19 (ATerm t)
                                                                                    {
                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_19 (ATerm t)
                                                                                    {
                                                                                      ATerm j_24 = NULL,k_24 = NULL;
                                                                                      j_24 = t;
                                                                                      t = SSL_string_to_int(j_24);
                                                                                      k_24 = t;
                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), k_24);
                                                                                      t = term_f_32;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm u_19 (ATerm t)
                                                                                    {
                                                                                      t = term_v_45;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3_0(s_19, t_19, u_19, t);
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
                                                                                          ATerm v_19 (ATerm t)
                                                                                          {
                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm a_20 (ATerm t)
                                                                                          {
                                                                                            t = term_y_45;
                                                                                            t = toggle_config_0_0(t);
                                                                                            t = term_f_32;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm b_20 (ATerm t)
                                                                                          {
                                                                                            t = term_z_45;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3_0(v_19, a_20, b_20, t);
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
                                                                                                ATerm f_20 (ATerm t)
                                                                                                {
                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
                                                                                                    _fail(t);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm g_20 (ATerm t)
                                                                                                {
                                                                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                  t = term_f_32;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm h_20 (ATerm t)
                                                                                                {
                                                                                                  t = term_c_46;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3_0(f_20, g_20, h_20, t);
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
                                                                                                      ATerm i_20 (ATerm t)
                                                                                                      {
                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                                                                                          _fail(t);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm j_20 (ATerm t)
                                                                                                      {
                                                                                                        ATerm l_24 = NULL;
                                                                                                        l_24 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_f_46, (ATerm) ATinsert(ATempty, l_24));
                                                                                                        t = extend_config_0_0(t);
                                                                                                        t = term_f_32;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm k_20 (ATerm t)
                                                                                                      {
                                                                                                        t = term_g_46;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3_0(i_20, j_20, k_20, t);
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
                                                                                                            ATerm m_20 (ATerm t)
                                                                                                            {
                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                                                                _fail(t);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm p_20 (ATerm t)
                                                                                                            {
                                                                                                              ATerm m_24 = NULL,n_24 = NULL;
                                                                                                              m_24 = t;
                                                                                                              t = SSL_string_to_int(m_24);
                                                                                                              n_24 = t;
                                                                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_24);
                                                                                                              t = term_f_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm q_20 (ATerm t)
                                                                                                            {
                                                                                                              t = term_j_46;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = ArgOption_3_0(m_20, p_20, q_20, t);
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
                                                                                                                    ATerm o_24 = NULL;
                                                                                                                    o_24 = t;
                                                                                                                    if(match_string(t, "-S"))
                                                                                                                      {
                                                                                                                        t = o_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
                                                                                                                          _fail(t);
                                                                                                                        t = o_24;
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
                                                                                                                          ATerm p_24 = NULL;
                                                                                                                          p_24 = t;
                                                                                                                          if(match_string(t, "-h"))
                                                                                                                            {
                                                                                                                              t = p_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
                                                                                                                                _fail(t);
                                                                                                                              t = p_24;
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm b_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                          t = term_f_32;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm c_21 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_p_46;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(a_21, b_21, c_21, t);
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
                                                                                                                              ATerm d_21 (ATerm t)
                                                                                                                              {
                                                                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
                                                                                                                                  _fail(t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm e_21 (ATerm t)
                                                                                                                              {
                                                                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                                t = term_f_32;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm f_21 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_s_46;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3_0(d_21, e_21, f_21, t);
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
                                                                                                                                    ATerm g_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm q_24 = NULL;
                                                                                                                                      q_24 = t;
                                                                                                                                      if(match_string(t, "-v"))
                                                                                                                                        {
                                                                                                                                          t = q_24;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
                                                                                                                                            _fail(t);
                                                                                                                                          t = q_24;
                                                                                                                                        }
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm h_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                                      t = term_f_32;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm i_21 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_v_46;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Option_3_0(g_21, h_21, i_21, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(u_46);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = t_46;
                                                                                                                                    {
                                                                                                                                      ATerm j_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm r_24 = NULL;
                                                                                                                                        r_24 = t;
                                                                                                                                        if(match_string(t, "--warning"))
                                                                                                                                          {
                                                                                                                                            t = r_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
                                                                                                                                              _fail(t);
                                                                                                                                            t = r_24;
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm k_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm s_24 = NULL;
                                                                                                                                        s_24 = t;
                                                                                                                                        {
                                                                                                                                          ATerm w_46 = t;
                                                                                                                                          int x_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = term_r_31;
                                                                                                                                              t = get_config_0_0(t);
                                                                                                                                              {
                                                                                                                                                ATerm n_21 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                                                                                                                                                    _fail(t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm o_21 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Cons_2_0(n_21, o_21, t);
                                                                                                                                                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__3, term_f_39, term_r_31, (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                              }
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(x_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = w_46;
                                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATempty, s_24));
                                                                                                                                              t = extend_config_0_0(t);
                                                                                                                                            }
                                                                                                                                          t = term_f_32;
                                                                                                                                        }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm l_21 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = term_y_46;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = ArgOption_3_0(j_21, k_21, l_21, t);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm map_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm v_24 (ATerm t)
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
        t = Cons_2_0(j_86, v_24, t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = y_24;
        t = h_0(t);
        c_25 = t;
        t = x_24;
        t = g_0(t);
        d_25 = t;
        t = y_24;
        {
          ATerm p_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_25), d_25);
            return(t);
          }
          t = reverse_acc_2_0(g_0, p_21, t);
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
  ATerm s_21 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_21, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  t = term_f_32;
  t = f_0(t);
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), e_25), term_t_47), term_i_47), term_s_47), term_i_47), term_r_47), term_q_47), term_i_47), term_p_47);
  return(t);
}
ATerm Program_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  f_25 = t;
  t = g_25;
  t = x_70(t);
  h_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_25), f_25);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm v_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_47;
      t = get_config_0_0(t);
      m_25 = t;
      ;
      LocalPopChoice(w_47);
    }
  else
    {
      t = v_47;
      {
        ATerm x_21 (ATerm t)
        {
          ATerm z_21 (ATerm t)
          {
            m_25 = t;
            return(t);
          }
          t = Program_1_0(z_21, t);
          return(t);
        }
        t = option_defined_1_0(x_21, t);
      }
    }
  {
    ATerm a_22 (ATerm t)
    {
      ATerm n_22 (ATerm t)
      {
        t = m_25;
        return(t);
      }
      t = short_description_1_0(n_22, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(a_22, t);
    t = term_y_47;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm o_22 (ATerm t)
      {
        ATerm n_25 = NULL;
        n_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_25), term_z_47);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(o_22, t);
      {
        ATerm u_22 (ATerm t)
        {
          ATerm o_25 = NULL;
          ATerm z_22 (ATerm t)
          {
            t = m_25;
            return(t);
          }
          t = long_description_1_0(z_22, t);
          o_25 = t;
          t = (ATerm) ATinsert(CheckATermList(o_25), term_i_47);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(u_22, t);
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
ATerm Undefined_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  p_25 = t;
  t = q_25;
  t = y_70(t);
  r_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_25), p_25);
  return(t);
}
ATerm fetch_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm w_25 (ATerm t)
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_86, _id, t);
        ;
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        t = Cons_2_0(_id, w_25, t);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  t = fetch_1_0(v_103, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_25;
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
            t = y_25;
          }
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
        t = (ATerm) ATinsert(ATempty, y_25);
      }
    z_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_25);
    t = y_25;
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
      ATerm a_23 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_23 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_48;
        return(t);
      }
      ATerm h_23 (ATerm t)
      {
        t = term_k_48;
        return(t);
      }
      t = Option_3_0(a_23, g_23, h_23, t);
      ;
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      {
        ATerm i_23 (ATerm t)
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
        ATerm r_23 (ATerm t)
        {
          t = term_m_48;
          return(t);
        }
        t = Option_3_0(i_23, q_23, r_23, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__3))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      m_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
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
        t = SSL_table_get(k_26, l_26);
        ;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = (ATerm) ATempty;
      }
    n_26 = t;
    t = SSL_table_put(k_26, l_26, (ATerm) ATinsert(CheckATermList(n_26), m_26));
    t = (ATerm) ATmakeAppl(sym__3, k_26, l_26, m_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm s_26 = NULL;
  t = term_f_32;
  t = a_105(t);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_48, term_s_48, s_26);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = u_26;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm z_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = a_0(t);
      t = term_f_32;
      t = b_0(t);
      z_26 = t;
      t = (ATerm) ATinsert(CheckATermList(w_26), z_26);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_23 (ATerm t)
  {
    ATerm b_27 = NULL;
    b_27 = t;
    if(match_string(t, "--help"))
      {
        t = b_27;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = b_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = b_27;
          }
      }
    return(t);
  }
  ATerm t_23 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_t_48;
    return(t);
  }
  ATerm u_23 (ATerm t)
  {
    t = term_u_48;
    return(t);
  }
  t = Option_3_0(s_23, t_23, u_23, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  {
    ATerm v_23 (ATerm t)
    {
      t = term_v_48;
      t = y_104(t);
      return(t);
    }
    t = try_1_0(v_23, t);
    t = d_27;
    {
      ATerm w_23 (ATerm t)
      {
        ATerm e_27 = NULL;
        e_27 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_27);
        t = (ATerm) ATmakeAppl(sym_Program_1, e_27);
        return(t);
      }
      ATerm t_24 (ATerm t)
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
                t = y_104(t);
                t = Cons_2_0(_id, t_24, t);
              }
            ;
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            {
              ATerm g_27 = NULL,h_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_27 = ATgetFirst((ATermList) t);
                  h_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATmakeAppl(sym_Undefined_1, g_27));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_23, t_24, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,t_27 = NULL;
  n_27 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_27;
  {
    ATerm u_24 (ATerm t)
    {
      ATerm a_49 = t;
      int b_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_104(t);
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
    t = parse_options_p__1_0(u_24, t);
    {
      ATerm w_24 (ATerm t)
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_27 = NULL;
            y_27 = t;
            {
              ATerm g_49 = t;
              int h_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_27;
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
                          ATerm z_24 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(z_24, t);
                        }
                      }
                    t = y_27;
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
                  t = y_27;
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
              ATerm a_25 (ATerm t)
              {
                ATerm b_25 (ATerm t)
                {
                  o_27 = t;
                  return(t);
                }
                t = Undefined_1_0(b_25, t);
                return(t);
              }
              t = option_defined_1_0(a_25, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_27)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_27)), term_l_49));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_24, t);
      t_27 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_27;
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
        ATerm m_28 = NULL,n_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_28 = ATgetFirst((ATermList) t);
            n_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_28;
        {
          ATerm j_25 (ATerm t)
          {
            t = n_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_25, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  t = SSL_explode_term(r_28);
  if(match_cons(t, sym__2))
    {
      ATerm o_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_28;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm t_28 (ATerm t)
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_28, t);
        ;
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_86(t);
      }
    return(t);
  }
  t = t_28(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_28;
  {
    ATerm k_25 (ATerm t)
    {
      t = u_28;
      return(t);
    }
    t = at_end_1_0(k_25, t);
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
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  w_28 = t;
  t = x_28;
  t = y_63(t);
  z_28 = t;
  t = y_28;
  t = z_63(t);
  a_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_28, a_29), w_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm f_29 = NULL;
  ATerm l_25 (ATerm t)
  {
    ATerm g_29 = NULL;
    g_29 = t;
    t = SSL_explode_string(g_29);
    return(t);
  }
  ATerm t_25 (ATerm t)
  {
    ATerm h_29 = NULL;
    h_29 = t;
    t = SSL_explode_string(h_29);
    return(t);
  }
  t = _2_0(l_25, t_25, t);
  t = conc_0_0(t);
  f_29 = t;
  t = SSL_implode_string(f_29);
  return(t);
}
ATerm Cons_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  n_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      k_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_29);
  i_29 = t;
  t = j_29;
  t = h_65(t);
  l_29 = t;
  t = k_29;
  t = i_65(t);
  m_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_29), l_29), i_29);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm r_29 = NULL,x_29 = NULL;
  r_29 = t;
  t = SSL_explode_string(r_29);
  {
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 (ATerm t)
        {
          ATerm v_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, y_29, t);
              ;
              LocalPopChoice(w_49);
            }
          else
            {
              t = v_49;
              {
                ATerm u_25 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm v_25 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(u_25, v_25, t);
              }
            }
          return(t);
        }
        t = y_29(t);
        ;
        LocalPopChoice(u_49);
      }
    else
      {
        t = t_49;
        t = (ATerm) ATempty;
      }
    x_29 = t;
    t = SSL_implode_string(x_29);
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
  ATerm z_29 = NULL,b_30 = NULL,c_30 = NULL,e_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,n_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  z_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(1));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_x_49;
  t = xtc_find_path_0_0(t);
  b_30 = t;
  t = term_y_49;
  t = xtc_find_path_0_0(t);
  c_30 = t;
  t = term_z_49;
  t = xtc_find_path_0_0(t);
  e_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), c_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), b_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_b_50);
  t = conc_strings_0_0(t);
  h_30 = t;
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_b_50);
  t = conc_strings_0_0(t);
  j_30 = t;
  t = term_c_50;
  t = xtc_find_path_0_0(t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, term_b_50);
  t = conc_strings_0_0(t);
  n_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), j_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), h_30), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_a_50;
  t = xtc_find_path_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, term_d_50);
  t = conc_strings_0_0(t);
  q_30 = t;
  t = term_c_50;
  t = xtc_find_path_0_0(t);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, term_d_50);
  t = conc_strings_0_0(t);
  s_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), s_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), q_30), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = z_29;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm x_25 (ATerm t)
    {
      ATerm t_30 = NULL;
      t = term_e_50;
      t = get_config_0_0(t);
      t = term_f_50;
      t = xtc_find_0_0(t);
      t_30 = t;
      t = SSL_copy(t_30, (ATerm) ATmakeAppl(sym_stdout_0));
      t = SSL_exit((ATerm) ATmakeInt(0));
      return(t);
    }
    t = try_1_0(x_25, t);
    {
      ATerm a_26 (ATerm t)
      {
        t = term_g_50;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(0));
        return(t);
      }
      t = try_1_0(a_26, t);
      {
        ATerm h_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_30 = NULL;
            u_30 = t;
            t = term_v_38;
            t = get_config_0_0(t);
            t = u_30;
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
          ATerm b_26 (ATerm t)
          {
            ATerm w_30 = NULL;
            w_30 = t;
            t = term_v_38;
            t = get_config_0_0(t);
            {
              ATerm c_26 (ATerm t)
              {
                t = term_k_50;
                return(t);
              }
              t = debug_1_0(c_26, t);
              t = w_30;
            }
            return(t);
          }
          t = if_verbose1_1_0(b_26, t);
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
        ATerm d_26 (ATerm t)
        {
          ATerm e_26 (ATerm t)
          {
            ATerm x_30 = NULL;
            x_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(x_30), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(CheckATermList(x_30), term_n_50));
            return(t);
          }
          t = if_verbose1_1_0(e_26, t);
          return(t);
        }
        t = profile_p__2_0(d_26, compile_0_0, t);
        {
          ATerm f_26 (ATerm t)
          {
            ATerm y_30 = NULL;
            t = run_time_0_0(t);
            y_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_50), y_30), term_o_50));
            return(t);
          }
          t = if_verbose2_1_0(f_26, t);
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
        ATerm z_30 = NULL;
        t = run_time_0_0(t);
        z_30 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_30), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
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
